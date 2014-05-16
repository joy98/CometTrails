/* PI_types.h - defines types used across functions */

/* struct type to store the processed values from the config file */
typedef struct
{
	int algorithm;
	int ssb_centered;
	char inputfpath[260];
	char outputpath[260];
	int number_of_threads;
	int save_as_binary;
	SpiceDouble final_time;			// [s]
	SpiceDouble start_time_save;	// [s]
	int N_bodys;
	int body_int[10];
	SpiceDouble GM[10];				// [km^3/s^2]
	int n;
	int first_particle_number;
	SpiceDouble particle_mass;		// [kg]
	SpiceDouble particle_density;	// [kg/m^-3]
	SpiceDouble particle_radius;	// [m]
	SpiceDouble q_pr;				// [-]
	SpiceDouble prdconst;			// [km^3.5/s^2]
	SpiceDouble solar_lum;			// [W]
	SpiceDouble beta;				// [-]
	// Algorithm-specific
	SpiceDouble dv_step;			// [km/s^2]
	SpiceDouble e_target;			// [km]
} configuration_values;

/* struct type for the config file readout */
typedef struct
{
	// Simulation
	const char* algo;
	int ssbc;
	const char* finaltime;
	const char* starttimes;
	int nbodys;
	const char* bodysid;
	const char* mult;
	int nthreads;
	int savebin;
	// Particles
	const char* inputfn;
	const char* outputfn;
	const char* pmass;
	const char* q_pr;
	int pdensity;
	int fpnum;
	// Algorithm-specific
	const char* dvstep;
	const char* etarget;
} configuration_readout;