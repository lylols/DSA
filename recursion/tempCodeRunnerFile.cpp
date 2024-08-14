    s += arr[ind];
    prints( ind+1, ds, s, sum, arr, n );

    ds.pop();
    s -= arr[ind];

    //not pick cond
    prints(ind+1, ds, 0, sum, arr, n );