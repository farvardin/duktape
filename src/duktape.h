/*
 *  Duktape public API for Duktape @DUK_VERSION_FORMATTED@.
 *  See the API reference for documentation on call semantics.
 *  The exposed API is inside the DUK_API_PUBLIC_H_INCLUDED
 *  include guard.  Other parts of the header are Duktape
 *  internal and related to platform/compiler/feature detection.
 *
 *  Git commit @GIT_COMMIT@ (@GIT_DESCRIBE@).
 *
 *  See Duktape AUTHORS.txt and LICENSE.txt for copyright and
 *  licensing information.
 */

#ifndef DUKTAPE_H_INCLUDED
#define DUKTAPE_H_INCLUDED

@DUK_FEATURES_H@
@DUK_API_PUBLIC_H@
@DUK_FEATURES_SANITY_H@
@DUK_DBLUNION_H@

#endif  /* DUKTAPE_H_INCLUDED */
