#include <iostream>
using namespace std;
class carry
{
protected:
    string title;
    float rating;

public:
    carry(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display(void)
    {
        cout << "random text";
    }
};
class carryVideo : public carry
{
    int videolen;

public:
    carryVideo(string s, float r, int vl) : carry(s, r)
    {
        videolen = vl;
    }
    void display(void)
    {
        cout << "This is an amazing video with title : " << title << endl;
        cout << "Rating : " << rating << " out of 5 stars " << endl;
        cout << "The length of video is " << videolen << endl;
    }
};
class carrytext : public carry
{
    int wordlen;

public:
    carrytext(string s, float r, int wc) : carry(s, r)
    {
        wordlen = wc;
    }
    void display(void)
    {
        cout << "This is an amazing word with title : " << title << endl;
        cout << "Rating : " << rating << " out of 5 stars " << endl;
        cout << "The length of text is " << wordlen << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;
    title = "Hello World!";
    vlen = 4.87;
    rating = 4.78;
    carryVideo newvideo(title, rating, vlen);
    // newvideo.display();

    // for text
    title = "Hello text";
    words = 4.99;
    rating = 3.5;
    carrytext carryword(title, rating, words);
    // carryword.display();

    carry *tut[2];
    tut[0] = &newvideo;
    tut[1] = &carryword;
    tut[0]->display();
    tut[1]->display();

    return 0;
}