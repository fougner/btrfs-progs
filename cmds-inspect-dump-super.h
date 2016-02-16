int cmd_inspect_dump_super(int ac, char **av);

static const char * const cmd_inspect_dump_super_usage[] = {
	"btrfs inspect-internal dump-super [options] device [device...]",
	"Dump superblock from a device",
	"-f                  print full superblock information",
	"-a                  print information of all superblocks",
	"-i <super_mirror>   specify which mirror to print out",
	"-F                  attempt to dump superblocks with bad magic",
	"-s <bytenr>         specify alternate superblock offset",
	NULL
};
