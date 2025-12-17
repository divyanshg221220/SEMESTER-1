#define SIMPLE_INTEREST(p, r, t) (((p) * (r) * (t)) / 100.0)
#define AMOUNT(p, r, t) ((p) + SIMPLE_INTEREST((p), (r), (t)))