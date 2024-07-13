#ソース：https://archive.ics.uci.edu/dataset/15/breast+cancer+wisconsin+original

#ライブラリをインポートする
import pandas as pd

#データセットをインポートする
dataset = pd.read_csv('breast_cancer.csv')
X = dataset.iloc[:, 1:-1].values
y = dataset.iloc[:, -1].values

#データセットをトレーニングセットとテストセットに分割する
from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size = 0.2, random_state = 0)

#トレーニングセットでロジスティック回帰モデルを訓練する
from sklearn.linear_model import LogisticRegression
classifier = LogisticRegression(random_state = 0)
classifier.fit(X_train, y_train)

#テストセットの結果を予測する
y_pred = classifier.predict(X_test)

#混同行列を作成する
from sklearn.metrics import confusion_matrix
cm = confusion_matrix(y_test, y_pred)
print(cm)

#
from sklearn.model_selection import cross_val_score
accuracies = cross_val_score(estimator = classifier, X = X_train, y = y_train, cv = 10)
print("Accuracy : {:.2f}%".format(accuracies.mean()*100))
print("Standard Deviation : {:.2f}%".format(accuracies.std()*100))
