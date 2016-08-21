
/* what is a timeline_point? */
struct timeline_point {
    int time;
    char color;
    char note;
    int acceleration;
    struct timeline_moment moment;  
};

/* what is a timeline_moment? */
struct timeline_moment {
    int mass;
    int velocity;
}     

