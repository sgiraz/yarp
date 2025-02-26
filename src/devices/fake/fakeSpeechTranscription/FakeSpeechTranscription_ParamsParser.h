/*
 * SPDX-FileCopyrightText: 2023-2023 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */


// Generated by yarpDeviceParamParserGenerator (1.0)
// This is an automatically generated file. Please do not edit it.
// It will be re-generated if the cmake flag ALLOW_DEVICE_PARAM_PARSER_GERNERATION is ON.

// Generated on: Tue Feb 27 00:56:32 2024


#ifndef FAKESPEECHTRANSCRIPTION_PARAMSPARSER_H
#define FAKESPEECHTRANSCRIPTION_PARAMSPARSER_H

#include <yarp/os/Searchable.h>
#include <yarp/dev/IDeviceDriverParams.h>
#include <string>
#include <cmath>

/**
* This class is the parameters parser for class FakeSpeechTranscription.
*
* These are the used parameters:
* | Group name | Parameter name | Type   | Units | Default Value | Required | Description   | Notes |
* |:----------:|:--------------:|:------:|:-----:|:-------------:|:--------:|:-------------:|:-----:|
* | -          | language       | string | -     | auto          | 0        | language code | -     |
*
* The device can be launched by yarpdev using one of the following examples:
* \code{.unparsed}
* yarpdev --device fakeSpeechTranscription --language auto
* \endcode
*
* \code{.unparsed}
* yarpdev --device fakeSpeechTranscription
* \endcode
*
*/

class FakeSpeechTranscription_ParamsParser : public yarp::dev::IDeviceDriverParams
{
public:
    FakeSpeechTranscription_ParamsParser();
    ~FakeSpeechTranscription_ParamsParser() override = default;

public:
    const std::string m_device_classname = {"FakeSpeechTranscription"};
    const std::string m_device_name = {"fakeSpeechTranscription"};
    bool m_parser_is_strict = false;
    struct parser_version_type
    {
         int major = 1;
         int minor = 0;
    };
    const parser_version_type m_parser_version = {};

    const std::string m_language_defaultValue = {"auto"};

    std::string m_language = {"auto"};

    bool          parseParams(const yarp::os::Searchable & config) override;
    std::string   getDeviceClassName() const override { return m_device_classname; }
    std::string   getDeviceName() const override { return m_device_name; }
    std::string   getDocumentationOfDeviceParams() const override;
    std::vector<std::string> getListOfParams() const override;
};

#endif
