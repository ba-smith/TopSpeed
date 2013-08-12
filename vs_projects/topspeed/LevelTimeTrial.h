#ifndef __RACING_LEVELTIMETRIAL_H__
#define __RACING_LEVELTIMETRIAL_H__

#include "Game.h"
#include "Car.h"
#include "Track.h"
#include "Level.h"

class LevelTimeTrial : public Level
{
public:
    LevelTimeTrial(Game* game, UInt nrOfLaps, Char* track, Boolean automaticTransmission, UInt vehicle, Char* vehicleFile = NULL);
    virtual ~LevelTimeTrial( );

public:
    void initialize( );
    void finalize( );

    void run(Float elapsed);

    Boolean started( )           { return m_started;            }
    Boolean manualTransmission( )  { return m_manualTransmission;   }
    void pause( );
    void unpause( );

private:
    // Boolean readHighscores( );
    void    writeHighScore(/* Track* track, Int time */);
    // void    writeHighscores( );
    Int     readHighScore(/* Track* track */);
    // void    handleFinish( );

private:
    DirectX::Sound*         m_soundVehicle;
};


#endif // __RACING_LEVELTIMETRIAL_H__
