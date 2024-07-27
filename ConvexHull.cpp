bool cmp(point A, point B) {
    if (A.x != B.x) return A.x < B.x;
    return A.y < B.y;
}

bool ccw(point A, point B, point C) {
    ld orientation = (B - A).cross(C - A);
    return orientation > 0 || abs(orientation - 0) < eps;
}

sort(p + 1, p + 1 + n, cmp);

    vector<point> hullA, hullB;
    for (int i = 1; i <= n; ++i) {
        if (hullA.empty()) {
            hullA.pb(p[i]);
            continue;
        }

        while (hullA.size() > 1 && ccw(hullA[hullA.size() - 2], hullA.back(), p[i]))
            hullA.pop_back();

        hullA.pb(p[i]);
    }

    for (int i = n; i >= 1; --i) {
        if (hullB.empty()) {
            hullB.pb(p[i]);
            continue;
        }

        while (hullB.size() > 1 && ccw(hullB[hullB.size() - 2], hullB.back(), p[i]))
            hullB.pop_back();

        hullB.pb(p[i]);
    }

    for (int i = 1; i < hullB.size() - 1; ++i)
        hullA.pb(hullB[i]);
