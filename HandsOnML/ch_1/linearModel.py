import matplotlib
import matplotlib.pyplot as plt
import sklearn
import pandas as pd
from pandasql import sqldf as sql
import numpy as np

covid19_tokyo = pd.read_csv('Desktop/130001_tokyo_covid19_patients.csv')
