#include "rclcpp/rclcpp.hpp"
#include "ets_msgs/msg/truck.hpp"

const double latitudes[] = {
	40.70982590371656,
	40.71050740452743,
	40.71127606037024,
	40.71181214960742,
	40.7126770272607,
	40.71355866455826,
	40.71419355513893,
	40.71501285107956,
	40.71598178719738,
	40.71716626028979,
	40.71787529917187,
	40.71879660746865,
	40.71969595222745,
	40.72065255814741,
	40.72164131180237,
	40.72280605884433,
	40.72402004766143,
	40.72511635435642,
	40.72596818763969,
	40.7271442618886,
	40.72797005276647,
	40.7289857939549,
	40.729794701322,
	40.72969822200193,
	40.72998706093886,
	40.73107269681861,
	40.73221582029486,
	40.73329606997167,
	40.73428323442469,
	40.73527534797064,
	40.73621197160905,
	40.73722211650782,
	40.73814025144682,
	40.73915784170971,
	40.73993948067945,
	40.74087691373822,
	40.74183025457572,
	40.74264228278656,
	40.74359734296615,
	40.74445052697019,
	40.74507624151456,
	40.74576015810513,
	40.74535574228092,
	40.7449054925665,
	40.74546397767327,
	40.74615229169028,
	40.74684879783162,
	40.74786941859241,
	40.74854290344592,
	40.74940812099741,
	40.74975995856365,
	40.75028512017521,
	40.75087165599384,
	40.75144598056213,
	40.75181311099377,
	40.75232708344328,
	40.75275713091622,
	40.75356968857563,
	40.75405813558207,
	40.75474421869185,
	40.75508783664305,
	40.75570066137085,
	40.75617398908208,
	40.75660662538082,
	40.75724122136785,
	40.75781287689713,
	40.75847207755132,
	40.75888983418872,
	40.75945752746036,
	40.76005086944578,
	40.76045810351246,
	40.76093307232765,
	40.76134149816809,
	40.76184505464186,
	40.76257172374374,
	40.76342703436865,
	40.76438997980534,
	40.76528230873166,
	40.76615923088126,
	40.7672985260167,
	40.76844780889783,
	40.76960325230912,
	40.77083230205409,
	40.77242157300591,
	40.77365419880987,
	40.77488213476346,
	40.7762096882246,
	40.77767435687177,
	40.7788957207024,
	40.78020573759038,
	40.78162229049175,
	40.78298509959325,
	40.78470596618246,
	40.78623138920479,
	40.78775256104403,
	40.78936002987449,
	40.79097201078687,
	40.7924459448129,
	40.79383143109121,
	40.79490003009991,
	40.79598295923184,
	40.79608169926507,
	40.79566022765846,
	40.79507565080831,
	40.79425316379469,
	40.79354767232889,
	40.79287527556937,
	40.79201317109885,
	40.79160069134481,
	40.79138513836604,
	40.79062502466279,
	40.79005163017646,
	40.78930446288689,
	40.78829666172672,
	40.78754811571539,
	40.78674877211156,
	40.78565835222988,
	40.78452928381292,
	40.78368094300697,
	40.78486378180411,
	40.78615254331845,
	40.78795562990769,
	40.79028079875328,
	40.7920243038572,
	40.79368062789734,
	40.79516931024105,
	40.79760045940751,
	40.7991243531709,
	40.80024067337459,
	40.80110394903974,
	40.8011610814925,
	40.80011359765592,
	40.7990132832585,
	40.79764303112027,
	40.79662069081911,
	40.79569073215748,
	40.79383766612777,
	40.79172656831219,
	40.78953664092111,
	40.7874855320938,
	40.78472548474713,
	40.78242801197644,
	40.78054089839705,
	40.77871007535423,
	40.77697012347068,
	40.77500794704034,
	40.77345264536713,
	40.77179741934787,
	40.77011041491825,
	40.76943536243958,
	40.76880654539973,
	40.76748586829587,
	40.76550390767934,
	40.76290756457059,
	40.7601192685926,
	40.75822114460109,
	40.75615816861256,
	40.75320160416103,
	40.75066079551581,
	40.74856055551721,
	40.74489220774733,
	40.74137188786457,
	40.73908541286876,
	40.73735351618356,
	40.7362889579241,
	40.73587168782166,
	40.73557389126739,
	40.73535399499017,
	40.73492179772781,
	40.73408256760248,
	40.7322262493857,
	40.73045665848753,
	40.7289451291167,
	40.72741052657084,
	40.72571775329585,
	40.7248314832165,
	40.72428369021978,
	40.7230908497131,
	40.72133516116006,
	40.71953205731833,
	40.71804245252364,
	40.71659642228686,
	40.71490083165884,
	40.71325941925847,
	40.71179460057947,
	40.71040811652254,
	40.70884398062368,
	40.70679336904985,
	40.70490369555628,
	40.70346428764078,
	40.70139560987757,
	40.70046100087362,
	40.69868248906825,
	40.69687149586947,
	40.69572931477296,
	40.69585718218919,
	40.6960441575355,
	40.69610929088076,
	40.69614473084758,
	40.69633385652648,
	40.69655212524529,
	40.69727946490119,
	40.69637517071107,
	40.69599143688269,
	40.69609574275177,
	40.69616569602714,
	40.69619790362111,
	40.69681644458069,
	40.69796822918369,
	40.69891154505746,
	40.69971779372057,
	40.70071953834919,
	40.7019155566194,
	40.70321836729853,
	40.70429061864174,
	40.70518381826066,
	40.70623820492358,
	40.70753992742524,
	40.70863098727387,
	40.70962471507604
};

const double longitudes[] = {
	-74.00144274236122,
	-74.00224951821474,
	-74.0031813219466,
	-74.00402199099602,
	-74.00452664345357,
	-74.00375228098542,
	-74.00277623133449,
	-74.00212890822326,
	-74.00160586872255,
	-74.00063160690765,
	-74.00009981455375,
	-73.99934821013797,
	-73.99851827522554,
	-73.99784257909147,
	-73.99744386820124,
	-73.99688517528176,
	-73.9963587449823,
	-73.99537087377318,
	-73.99469966509609,
	-73.99367150657115,
	-73.99313068945639,
	-73.99212539285304,
	-73.99144348718062,
	-73.99030725056707,
	-73.98941498542479,
	-73.98875330072866,
	-73.98786616854346,
	-73.9872238175049,
	-73.98642585019351,
	-73.98583858121958,
	-73.98510943981988,
	-73.98411398810244,
	-73.98364196695793,
	-73.98281351865272,
	-73.98238999591918,
	-73.98176007094879,
	-73.98090181784194,
	-73.98031093740747,
	-73.97957868195991,
	-73.97904203670262,
	-73.97850308052404,
	-73.97804874801612,
	-73.97710692823351,
	-73.97617439729395,
	-73.97537813460643,
	-73.97491984270562,
	-73.97439954747377,
	-73.97364862616473,
	-73.97315500080413,
	-73.97335032699135,
	-73.9743283319854,
	-73.97542770297693,
	-73.97679979921494,
	-73.97781180173801,
	-73.97911603916299,
	-73.98029042476115,
	-73.98121585787852,
	-73.98115784652191,
	-73.98233118878613,
	-73.98377429782822,
	-73.98472355786637,
	-73.98603383709181,
	-73.98734017482512,
	-73.98849505144929,
	-73.98982414617181,
	-73.99113088856015,
	-73.99253770116839,
	-73.99381315592657,
	-73.99522976948835,
	-73.99633690493552,
	-73.9975135280815,
	-73.99862455169642,
	-73.99978807904134,
	-74.00094762197769,
	-74.00030553284164,
	-73.99936452094555,
	-73.99842051340184,
	-73.99770350899162,
	-73.99694801273222,
	-73.99618836713698,
	-73.99529422090464,
	-73.9945881502894,
	-73.9942930902359,
	-73.99357180425481,
	-73.99272504439652,
	-73.99186549275366,
	-73.99107969643897,
	-73.98992399974364,
	-73.98901424889213,
	-73.98804474408323,
	-73.98691492137993,
	-73.98565863457196,
	-73.98461661210067,
	-73.98364443021552,
	-73.98282870936717,
	-73.98212762556692,
	-73.98152470758203,
	-73.9802858297661,
	-73.97903658632698,
	-73.97769646321036,
	-73.97650202417771,
	-73.97530279985298,
	-73.97425150601755,
	-73.97268437432473,
	-73.97055429943158,
	-73.96907835670559,
	-73.96748388246947,
	-73.96560369207189,
	-73.96363432897544,
	-73.96206910819869,
	-73.96069023665112,
	-73.95877958448413,
	-73.95673043196871,
	-73.95454109469738,
	-73.95267603879682,
	-73.95079147843593,
	-73.948314661083,
	-73.94556705501618,
	-73.94318391322005,
	-73.94124546421867,
	-73.93915660503566,
	-73.9380438164591,
	-73.93678812871076,
	-73.9349349868415,
	-73.93226053503327,
	-73.92997364832857,
	-73.9290586641808,
	-73.92933442211594,
	-73.93025573544529,
	-73.93137353644234,
	-73.92955319143516,
	-73.92745746904615,
	-73.92481029138551,
	-73.921987997269,
	-73.91981529035172,
	-73.92120402099873,
	-73.92272577734072,
	-73.92488682147065,
	-73.92710784394413,
	-73.92894414542677,
	-73.92995403729745,
	-73.92873185688923,
	-73.92731670619435,
	-73.92593538930738,
	-73.92467985836522,
	-73.92328301886346,
	-73.9213778961475,
	-73.91914649367716,
	-73.91601848280004,
	-73.91274065651093,
	-73.90827403544296,
	-73.90455343661235,
	-73.90343336969779,
	-73.90236258890845,
	-73.90144827918981,
	-73.90086114997059,
	-73.89972535272832,
	-73.89787519634393,
	-73.89750646373753,
	-73.89586114634275,
	-73.89485784452354,
	-73.89831971001043,
	-73.90110297270513,
	-73.90584043078638,
	-73.91041747814077,
	-73.91317925031426,
	-73.91577927960475,
	-73.91794416004579,
	-73.92054770730581,
	-73.92308445127161,
	-73.92531917388112,
	-73.92649849732416,
	-73.92761634867756,
	-73.92939585278629,
	-73.93171004925935,
	-73.93393882964386,
	-73.93710065482001,
	-73.93982840773738,
	-73.9423110316167,
	-73.94525890886516,
	-73.94770210768775,
	-73.95012109554153,
	-73.95233385007334,
	-73.95416774300385,
	-73.95559533896106,
	-73.95622421905502,
	-73.95697122373029,
	-73.95814534620324,
	-73.95925991654427,
	-73.959975366054,
	-73.96122420404939,
	-73.96158610171494,
	-73.96239968578411,
	-73.96290123436745,
	-73.96535537046077,
	-73.96798051619189,
	-73.97033254691148,
	-73.9734363209277,
	-73.97568004522415,
	-73.97837012492488,
	-73.98048371515411,
	-73.98103327682969,
	-73.98118264511737,
	-73.98287313984362,
	-73.98447836908998,
	-73.98624767025161,
	-73.98798262653439,
	-73.98868168729078,
	-73.98865849274807,
	-73.98849329992963,
	-73.9887677732342,
	-73.98999637230902,
	-73.99145775071895,
	-73.99296154760712,
	-73.9943502386657,
	-73.99540185934927,
	-73.9971209695792,
	-73.99837754171128,
	-73.99963559544439,
	-74.00126462866722
};

class Publisher : public rclcpp::Node
{
public:
	Publisher() : Node("ets_telemetry")
	{
		publisher_ = this->create_publisher<ets_msgs::msg::Truck>("truck");
	}

	void sendOdometry(float speed, float acc_x, float acc_y, float acc_z, float rpm, int gear, bool engine_running,
			  bool trailer_connected, double x, double y, double z, double heading, double pitch, double roll,
			  bool parking_brake, float air_pressure, float wear_engine, float wear_transmission, 
			  float battery_voltage, float wear_wheels, float cruise_control, float fuel,
			  float fuel_average_consumption, float wear_chassis, float cargo_mass)
	{
		static int i = 0;
		auto message = ets_msgs::msg::Truck();
		message.speed = speed;
		message.acc_x = acc_x;
		message.acc_y = acc_y;
		message.acc_z = acc_z;
		message.rpm = rpm;
		message.gear = gear;
		message.engine_running = engine_running;
		message.trailer_connected = trailer_connected;
		message.x = x;
		message.y = y;
		message.z = z;
		message.heading = heading;
		message.pitch = pitch;
		message.roll = roll;
		message.parking_brake = parking_brake;
		message.air_pressure = air_pressure;
		message.wear_engine = wear_engine;
		message.wear_transmission = wear_transmission;
		message.battery_voltage = battery_voltage;
		message.wear_wheels = wear_wheels;
		message.cruise_control = cruise_control;
		message.fuel = fuel;
		message.fuel_average_consumption = fuel_average_consumption;
		message.wear_chassis = wear_chassis;
		message.cargo_mass = cargo_mass;
		message.latitude = latitudes[i];
		message.longitude = longitudes[i];
		i++;
		if (i >= 220)
			i = 0;
		publisher_->publish(message);
	}

private:
	rclcpp::Publisher<ets_msgs::msg::Truck>::SharedPtr publisher_;
};
