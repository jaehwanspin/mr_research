#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <threads.h>

#include "metaresc.h"

// TYPEDEF_STRUCT(sample_model_t,
// 	(uint32_t, number),
// 	(char, name, [8]),
// 	(size_t, children_size),
// 	(sample_model_t*, children)
// );


// P00_TYPEDEF (
// 	STRUCT,
// 	sample_model_t,
// 	(uint32_t, number),
// 	(char, name, [8]),
// 	(size_t, children_size),
// 	(sample_model_t*, children)
// );


// P00_TYPEDEF_ (
// 	__COUNTER__,
// 	STRUCT,
// 	sample_model_t,
// 	(uint32_t, number),
// 	(char, name, [8]),
// 	(size_t, children_size),
// 	(sample_model_t*, children)
// );


// MR_IF_ELSE (MR_PASTE2 (MR_IS_MR_MODE_EQ_, MR_MODE))
// (
// 	P00_TYPEDEF_MODE (
// 		MR_MODE,
// 		84,
// 		STRUCT,
// 		sample_model_t,
// 		(uint32_t, number),
// 		(char, name, [8]),
// 		(size_t, children_size),
// 		(sample_model_t*, children)
// 	)
// )
// (
// 	P00_TYPEDEF_MODE (
// 		PROTO,
// 		84,
// 		STRUCT,
// 		sample_model_t,
// 		(uint32_t, number),
// 		(char, name, [8]),
// 		(size_t, children_size),
// 		(sample_model_t*, children)
// 	)
// 	P00_TYPEDEF_MODE (
// 		DESC,
// 		84,
// 		STRUCT,
// 		sample_model_t,
// 		(uint32_t, number),
// 		(char, name, [8]),
// 		(size_t, children_size),
// 		(sample_model_t*, children)
// 	)
// );


// P00_TYPEDEF_MODE (
// 	PROTO,
// 	84,
// 	STRUCT,
// 	sample_model_t,
// 	(uint32_t, number),
// 	(char, name, [8]),
// 	(size_t, children_size),
// 	(sample_model_t*, children)
// )
// P00_TYPEDEF_MODE (
// 	DESC,
// 	84,
// 	STRUCT,
// 	sample_model_t,
// 	(uint32_t, number),
// 	(char, name, [8]),
// 	(size_t, children_size),
// 	(sample_model_t*, children)
// )


P00_TYPEDEF_MODE_ (
	PROTO,
	84,
	STRUCT,
	ATTRIBUTES (
		P00_GET_ATTRIBUTES (
			sample_model_t,
			(uint32_t, number),
			(char, name, [8]),
			(size_t, children_size),
			(sample_model_t*, children)
		)
	),
	P00_GET_NON_ATTRIBUTES (
		sample_model_t,
		(uint32_t, number),
		(char, name, [8]),
		(size_t, children_size),
		(sample_model_t*, children)
	)
)
P00_TYPEDEF_MODE_ (
	DESC,
	84,
	STRUCT,
	ATTRIBUTES (
		P00_GET_ATTRIBUTES (
			sample_model_t,
			(uint32_t, number),
			(char, name, [8]),
			(size_t, children_size),
			(sample_model_t*, children)
		)
	),
	P00_GET_NON_ATTRIBUTES (
		sample_model_t,
		(uint32_t, number),
		(char, name, [8]),
		(size_t, children_size),
		(sample_model_t*, children)
	)
);


int main(int argc, char** argv)
{
	sample_model_t ms[] = {
		{
			.number = 11,
			.name = "j",
			.children_size = 0,
			.children = NULL
		},
		{
			.number = 12,
			.name = "i",
			.children_size = 0,
			.children = NULL
		}
	};

	sample_model_t m = {
		.number = 10,
		.name = "n",
		.children_size = 2,
		.children = ms
	};

	MR_PRINT((sample_model_t, &m, JSON));
	MR_FPRINT (stdout, (sample_model_t, &m, JSON));

	(MR_FOR (stdout, MR_NARG ((sample_model_t, &m, JSON)), MR_ADD, MR_PRINT_ONE_ELEMENT, (sample_model_t, &m, JSON)));



	return 0;
}