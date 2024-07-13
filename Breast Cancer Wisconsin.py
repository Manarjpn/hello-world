#https://archive.ics.uci.edu/dataset/15/breast+cancer+wisconsin+original

#ライブラリをインポートする
import pandas as pd

#データセットをインポートする
dataset = pd.read_csv('breast_cancer.csv')
X = dataset.iloc[:, 1:-1].values
y = dataset.iloc[:, -1].values
