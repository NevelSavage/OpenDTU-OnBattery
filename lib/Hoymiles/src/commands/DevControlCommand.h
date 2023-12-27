// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include "CommandAbstract.h"

class DevControlCommand : public CommandAbstract {
public:
    explicit DevControlCommand(const uint64_t target_address = 0, const uint64_t router_address = 0);

    virtual bool handleResponse(InverterAbstract& inverter, const fragment_t fragment[], const uint8_t max_fragment_id);

protected:
    void udpateCRC(const uint8_t len);
};