def mean(self, values, rounded):
    values = list(values)
    count = 0
    valsum = 0.0

    for value in values:
        valsum += values[count]
        count += 1

        mean = valsum / count


        if rounded == True:
            mean = round(mean)
            return mean

        elif rounded == False:
            return mean

        else:
         print("ERROR: No legal value provided for rounded ")
         print("legal values: True, False")
