#ifndef MERGE_CHANGE
#define MERGE_CHANGE

struct merge_delta;
typedef struct merge_delta merge_delta;

/**
 * Indicates a type of structural document change.
 */
typedef enum merge_change
  {
    change_insert,
    change_remove,
    unchanged,
    matched
  } merge_change;

/**
 * A simple pair of merge_delta and merge_change.
 */
typedef struct merge_delta_change
{
  merge_delta *delta;
  merge_change change;
} merge_delta_change;

#endif