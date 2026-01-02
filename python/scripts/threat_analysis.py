import pandas as pd
import numpy as np

def analyze_threats():
    data = {'severity': [1, 5, 2, 8, 3], 'type': ['UAV', 'Satellite', 'UAV', 'Electronic', 'Optical']}
    df = pd.DataFrame(data)
    print("Threat Analysis Summary:")
    print(df.describe())

if __name__ == "__main__":
    analyze_threats()
