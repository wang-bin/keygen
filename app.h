/*
 * Copyright (c) 2019-2021 WangBin <wbsecg1 at gmail.com>
 * This file is part of MDK
 * MDK SDK: https://github.com/wang-bin/mdk-sdk
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * This code is public domain.
 */
#pragma once
#include "mdk/global.h"

MDK_NS_BEGIN
namespace App {

// if key is null and no valid key was set, will try to check env "MDK_KEY" value.
// if key is null and a valid key was set, return true
// if key is not null, check the key, save and return the result
bool checkLicense(const char* key = nullptr);

std::string name();
std::string id();

void gen_pub(const uint8_t priv[32], uint8_t pub[32]);
std::string gen_key(const uint8_t priv[32], const uint8_t pub[32], const std::string& osnames, const std::string& archnames, const std::string& restrictions, int64_t seconds, int16_t major, int16_t minor, const std::string& appid);
bool verify_key(const std::string& key, const uint8_t pub[32]);
// for testing
bool verify_key(const std::string& key, const uint8_t pub[32], const std::string& osnames, const std::string& archnames, const std::string& restrictions, int64_t seconds, int16_t major, int16_t minor, const std::string& appid);
} // namespace App
MDK_NS_END