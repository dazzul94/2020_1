void bresenham_line (int xl, int yl, int xr, int yr) 
{   // 기울기가 1이상일 때 
    int x, y = yl, W = xr - xl, H = yr - yl;   
    int F = 2 * W - H, dF1 = 2 * W, dF2 = 2 * (W - H);

    for ( x = xl; x <= xr; x++) { 
        setPixel(x, y); 
        if (F < 0) 
            F += dF1; 
        else { 
            y++; 
            F += dF2; 
        } 
    }
}