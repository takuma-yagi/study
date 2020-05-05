class monster:

    def __init__(self, hp, ap):
        self.hp = hp
        self.ap = ap


def battle(player1, player2):
    if player2.hp // player1.ap == 0:
        return "No"
    for i in range(player2.hp // player1.ap):
        attack(player1, player2)
        attack(player2, player1)
        if player2.hp <= 0:
            return 'Yes'
    return 'No'

def attack(attacker, receiver):
    receiver.hp -= attacker.ap

a, b, c, d = map(int, input().split())
takahashi = monster(a, b)
aoki = monster(c,d)

print(battle(takahashi, aoki))


""
以下解き直し
takahashiの体力が0になるのはa/d回目の攻撃を受けるとき
aokiの体力が0になるのはb/c回目の攻撃を受けるとき
""

t_hp, t_ap, a_hp, a_ap = map(int,input().split())

while t_hp > 0 or a_hp > 0:
    a_hp -= t_ap
    if a_hp <= 0:
        print('Yes')
        break

    t_hp -= a_ap
    if t_hp <= 0:
        print('No')
        break
