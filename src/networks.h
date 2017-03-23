#ifndef NETWORKS_H
#define NETWORKS_H

#include <stdbool.h>
#include "fast5_interface.h"

Mat_rptr nanonet_posterior(const event_table events, float min_prob, bool return_log);
Mat_rptr nanonet_raw_posterior(const raw_table signal, float min_prob, bool return_log);

#endif  /* NETWORKS_H */


