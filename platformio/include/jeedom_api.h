#ifndef __JEEDOM_API_H__
#define __JEEDOM_API_H__

#include <Arduino.h>

/* 
 * Response from Jeedom HTTP API
 */
typedef struct jeedom_sensor
{
  String id;     // Jeedom value ID
  String value;  // Jeedom value (string format)
  String unit;   // Data unit
} jeedom_sensor_t;

/*
 * 
 */
typedef struct jeedom_house
{
  jeedom_sensor_t tempBedRIsaac;
  jeedom_sensor_t tempBedRVS;
  jeedom_sensor_t tempOffice;
  jeedom_sensor_t tempLiving;
  jeedom_sensor_t humidityLiving;
  jeedom_sensor_t powSolar;
  jeedom_sensor_t powHouse;
  jeedom_sensor_t powMeter;
  int numSensors;
} jeedom_house_t;

#endif