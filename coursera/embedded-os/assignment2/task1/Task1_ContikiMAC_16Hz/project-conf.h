
#ifndef PROJECT_CONF_H_
#define PROJECT_CONF_H_

#undef NETSTACK_CONF_RDC_CHANNEL_CHECK_RATE
#define NETSTACK_CONF_RDC_CHANNEL_CHECK_RATE 16

#undef NETSTACK_CONF_RDC
#define NETSTACK_CONF_RDC contikimac_driver

#undef NETSTACK_CONF_MAC
#define NETSTACK_CONF_MAC nullmac_driver

#endif /* PROJECT_CONF_H_ */
