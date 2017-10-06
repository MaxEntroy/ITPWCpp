#include <iostream>

/*
电视频道1-120
声音为1-20
电视默认开机在频道1，声音为0
*/

class TV
{
public:

	TV() : channel_(1), volume_(0), on_(false) {}

	int turn_on()
	{
		on_ = true;
		return 0;
	}
	int turn_off()
	{
		on_ = false;
		return 0;
	}

	int get_channel() const
	{
		return channel_;
	}
	int get_volume() const
	{
		return volume_;
	}


	int set_channel( int channel )
	{
		if( on_ && 1 <= channel && channel <= 120 )
		{	
			channel_ = channel;
			return 0;
		}
		else
			return -1;
	}
	int set_volume( int volume )
	{
		if( on_ && 1 <= volume && volume <= 20 )
		{
			volume_ = volume;
			return 0;
		}
		else
			return -1;
	}

	int channel_up()
	{
		if( on_ && channel_ < 120 )
		{	
			++channel_;
			return 0;
		}
		else
			return -1;
	}
	int channel_down()
	{
		if( on_ && channel_ > 1 )
		{
			--channel_;
			return 0;
		}
		else
			return -1;
	}

	int volume_up()
	{
		if( on_ && volume_ < 20 )
		{
			++volume_;
			return 0;
		}
		else
			return -1;
	}
	int volume_down()
	{
		if( on_ && volume_ > 1 )
		{
			--volume_;
			return 0;
		}
		else
			return -1;
	}


private:

	int channel_;
	int volume_;
	bool on_; // state for the tv

};


int main()
{
	TV tv1;
	tv1.turn_on();
	tv1.set_channel(30);
	tv1.set_volume(3);

	TV tv2;
	tv2.turn_on();
	tv2.channel_up();
	tv2.channel_up();
	tv2.volume_up();

	std::cout << "tv1's channel is " << tv1.get_channel() << " and volume is " << tv1.get_volume() << std::endl;
	std::cout << "tv2's channel is " << tv2.get_channel() << " and volume is " << tv2.get_volume() << std::endl;

	return 0;
}