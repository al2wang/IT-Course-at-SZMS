1.#Import Library
2.#Import other necessary libraries like pandas, numpy...
3.from sklearn import tree
4.#Assumed you have, X (predictor) and Y (target) for training data set and x_test(predictor) of test_dataset
5.# Create tree object 
6.model = tree.DecisionTreeClassifier(criterion='gini') # for classification, here you can change the algorithm as gini or entropy (information gain) by default it is gini  
7.# model = tree.DecisionTreeRegressor() for regression
8.# Train the model using the training sets and check score
9.model.fit(X, y)
0.model.score(X, y)
1.#Predict Output
2.predicted= model.predict(x_test)
