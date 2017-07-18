
#include "../lib/hash.h"
#include <stdint.h>

static const trit_t cornodecurl_tryte2trits_tbl[27][3] = {
    {0, 0, 0},  {1, 0, 0},  {-1, 1, 0},   {0, 1, 0},   {1, 1, 0},   {-1, -1, 1},
    {0, -1, 1}, {1, -1, 1}, {-1, 0, 1},   {0, 0, 1},   {1, 0, 1},   {-1, 1, 1},
    {0, 1, 1},  {1, 1, 1},  {-1, -1, -1}, {0, -1, -1}, {1, -1, -1}, {-1, 0, -1},
    {0, 0, -1}, {1, 0, -1}, {-1, 1, -1},  {0, 1, -1},  {1, 1, -1},  {-1, -1, 0},
    {0, -1, 0}, {1, -1, 0}, {-1, 0, 0},
};
