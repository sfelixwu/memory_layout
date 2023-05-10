
#ifndef _GPS_H_
#define _GPS_H_

// GPS.h

class GPS_DD
{
 private:
  double latitude;
  double longitude;
 public:
  explicit GPS_DD();
  explicit GPS_DD(double, double);
  double getLatitude();
  double getLongitude();
  double distance(GPS_DD);
  bool operator==(GPS_DD&);
};

#endif /* _GPS_H_ */
