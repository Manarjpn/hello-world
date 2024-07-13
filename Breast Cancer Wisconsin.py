#https://archive.ics.uci.edu/dataset/15/breast+cancer+wisconsin+original

#ライブラリをインポートする
import pandas as pd

#データセットをインポートする
dataset = pd.read_csv('breast_cancer.csv')
X = dataset.iloc[:, 1:-1].values
y = dataset.iloc[:, -1].values

#データセットをトレーニングセットとテストセットに分割する
from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size = 0.2, random_state = 0)
