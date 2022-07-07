1.#Import Library
2.#Import other necessary libraries like pandas, numpy...
3.from sklearn import linear_model
4.#Load Train and Test datasets
5.#Identify feature and response variable(s) and values must be numeric and numpy arrays
6.x_train=input_variables_values_training_datasets
7.y_train=target_variables_values_training_datasets
8.x_test=input_variables_values_test_datasets
9.#Create linear regression object
10.linear = linear_model.LinearRegression()
11.#Train the model using the training sets and check score
12.linear.fit(x_train, y_train)
13.linear.score(x_train, y_train)
14.#Equation coefficient and Intercept
15.print('Coefficient: \n', linear.coef_)
16.print('Intercept: \n', linear.intercept_)
17.#Predict Output
18.predicted= linear.predict(x_test)
