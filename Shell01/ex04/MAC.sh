#!/bin/bash
ifconfig -a link | grep ether | cut -c 8-
