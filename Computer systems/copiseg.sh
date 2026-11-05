#!/bin/bash

nombre_fichero=$(date +"%Y-%m-%d").tar.bz2
tar -vcjf $nombre_fichero $HOME/Documentos
cat $0
