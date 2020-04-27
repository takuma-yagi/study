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
