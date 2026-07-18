FUN_004e82b0:
004E82B0  56                        PUSH ESI
004E82B1  57                        PUSH EDI
004E82B2  6A FF                     PUSH -0x1
004E82B4  6A 67                     PUSH 0x67
004E82B6  6A 4D                     PUSH 0x4d
004E82B8  6A 4C                     PUSH 0x4c
004E82BA  6A 4B                     PUSH 0x4b
004E82BC  6A 4A                     PUSH 0x4a
004E82BE  6A 49                     PUSH 0x49
004E82C0  6A 48                     PUSH 0x48
004E82C2  6A 47                     PUSH 0x47
004E82C4  6A 46                     PUSH 0x46
004E82C6  6A 45                     PUSH 0x45
004E82C8  6A 44                     PUSH 0x44
004E82CA  6A 43                     PUSH 0x43
004E82CC  6A 42                     PUSH 0x42
004E82CE  68 30 0F 80 00            PUSH 0x800f30
004E82D3  E8 88 8A 1C 00            CALL 0x006b0d60
004E82D8  6A FF                     PUSH -0x1
004E82DA  6A 68                     PUSH 0x68
004E82DC  6A 66                     PUSH 0x66
004E82DE  6A 59                     PUSH 0x59
004E82E0  6A 58                     PUSH 0x58
004E82E2  6A 57                     PUSH 0x57
004E82E4  6A 56                     PUSH 0x56
004E82E6  6A 55                     PUSH 0x55
004E82E8  6A 54                     PUSH 0x54
004E82EA  6A 53                     PUSH 0x53
004E82EC  6A 52                     PUSH 0x52
004E82EE  6A 51                     PUSH 0x51
004E82F0  6A 50                     PUSH 0x50
004E82F2  6A 4F                     PUSH 0x4f
004E82F4  6A 4E                     PUSH 0x4e
004E82F6  68 40 0F 80 00            PUSH 0x800f40
004E82FB  E8 60 8A 1C 00            CALL 0x006b0d60
004E8300  83 C4 7C                  ADD ESP,0x7c
004E8303  6A FF                     PUSH -0x1
004E8305  6A 69                     PUSH 0x69
004E8307  6A 65                     PUSH 0x65
004E8309  6A 64                     PUSH 0x64
004E830B  6A 63                     PUSH 0x63
004E830D  6A 62                     PUSH 0x62
004E830F  6A 61                     PUSH 0x61
004E8311  6A 60                     PUSH 0x60
004E8313  6A 5F                     PUSH 0x5f
004E8315  6A 5E                     PUSH 0x5e
004E8317  6A 5D                     PUSH 0x5d
004E8319  6A 5C                     PUSH 0x5c
004E831B  6A 5B                     PUSH 0x5b
004E831D  6A 5A                     PUSH 0x5a
004E831F  68 50 0F 80 00            PUSH 0x800f50
004E8324  E8 37 8A 1C 00            CALL 0x006b0d60
004E8329  A1 3C 0F 80 00            MOV EAX,[0x00800f3c]
004E832E  8B 0D 30 0F 80 00         MOV ECX,dword ptr [0x00800f30]
004E8334  8B 15 34 0F 80 00         MOV EDX,dword ptr [0x00800f34]
004E833A  8B 35 38 0F 80 00         MOV ESI,dword ptr [0x00800f38]
004E8340  24 7F                     AND AL,0x7f
004E8342  89 0D 30 13 80 00         MOV dword ptr [0x00801330],ECX
004E8348  8B 0D 40 0F 80 00         MOV ECX,dword ptr [0x00800f40]
004E834E  A3 3C 13 80 00            MOV [0x0080133c],EAX
004E8353  A1 4C 0F 80 00            MOV EAX,[0x00800f4c]
004E8358  89 15 34 13 80 00         MOV dword ptr [0x00801334],EDX
004E835E  8B 15 44 0F 80 00         MOV EDX,dword ptr [0x00800f44]
004E8364  80 E4 FE                  AND AH,0xfe
004E8367  89 35 38 13 80 00         MOV dword ptr [0x00801338],ESI
004E836D  8B 35 48 0F 80 00         MOV ESI,dword ptr [0x00800f48]
004E8373  A3 4C 13 80 00            MOV [0x0080134c],EAX
004E8378  A1 5C 0F 80 00            MOV EAX,[0x00800f5c]
004E837D  89 0D 40 13 80 00         MOV dword ptr [0x00801340],ECX
004E8383  8B 0D 50 0F 80 00         MOV ECX,dword ptr [0x00800f50]
004E8389  89 15 44 13 80 00         MOV dword ptr [0x00801344],EDX
004E838F  8B 15 54 0F 80 00         MOV EDX,dword ptr [0x00800f54]
004E8395  89 35 48 13 80 00         MOV dword ptr [0x00801348],ESI
004E839B  8B 35 58 0F 80 00         MOV ESI,dword ptr [0x00800f58]
004E83A1  80 E4 FD                  AND AH,0xfd
004E83A4  6A FF                     PUSH -0x1
004E83A6  89 0D 50 13 80 00         MOV dword ptr [0x00801350],ECX
004E83AC  89 15 54 13 80 00         MOV dword ptr [0x00801354],EDX
004E83B2  89 35 58 13 80 00         MOV dword ptr [0x00801358],ESI
004E83B8  A3 5C 13 80 00            MOV [0x0080135c],EAX
004E83BD  6A 66                     PUSH 0x66
004E83BF  6A 58                     PUSH 0x58
004E83C1  6A 57                     PUSH 0x57
004E83C3  6A 52                     PUSH 0x52
004E83C5  6A 51                     PUSH 0x51
004E83C7  6A 50                     PUSH 0x50
004E83C9  6A 4F                     PUSH 0x4f
004E83CB  6A 4E                     PUSH 0x4e
004E83CD  68 F0 13 80 00            PUSH 0x8013f0
004E83D2  E8 89 89 1C 00            CALL 0x006b0d60
004E83D7  83 C4 64                  ADD ESP,0x64
004E83DA  6A FF                     PUSH -0x1
004E83DC  6A 4C                     PUSH 0x4c
004E83DE  6A 4B                     PUSH 0x4b
004E83E0  6A 46                     PUSH 0x46
004E83E2  6A 45                     PUSH 0x45
004E83E4  6A 44                     PUSH 0x44
004E83E6  6A 43                     PUSH 0x43
004E83E8  6A 42                     PUSH 0x42
004E83EA  68 00 14 80 00            PUSH 0x801400
004E83EF  E8 6C 89 1C 00            CALL 0x006b0d60
004E83F4  6A FF                     PUSH -0x1
004E83F6  68 10 14 80 00            PUSH 0x801410
004E83FB  E8 60 89 1C 00            CALL 0x006b0d60
004E8400  6A FF                     PUSH -0x1
004E8402  6A 56                     PUSH 0x56
004E8404  68 B0 13 80 00            PUSH 0x8013b0
004E8409  E8 52 89 1C 00            CALL 0x006b0d60
004E840E  6A FF                     PUSH -0x1
004E8410  6A 4A                     PUSH 0x4a
004E8412  68 C0 13 80 00            PUSH 0x8013c0
004E8417  E8 44 89 1C 00            CALL 0x006b0d60
004E841C  83 C4 44                  ADD ESP,0x44
004E841F  6A FF                     PUSH -0x1
004E8421  68 D0 13 80 00            PUSH 0x8013d0
004E8426  E8 35 89 1C 00            CALL 0x006b0d60
004E842B  6A FF                     PUSH -0x1
004E842D  6A 3D                     PUSH 0x3d
004E842F  6A 1F                     PUSH 0x1f
004E8431  6A 13                     PUSH 0x13
004E8433  6A 12                     PUSH 0x12
004E8435  6A 11                     PUSH 0x11
004E8437  6A 10                     PUSH 0x10
004E8439  6A 0F                     PUSH 0xf
004E843B  6A 0E                     PUSH 0xe
004E843D  6A 0D                     PUSH 0xd
004E843F  6A 0C                     PUSH 0xc
004E8441  6A 20                     PUSH 0x20
004E8443  6A 1E                     PUSH 0x1e
004E8445  6A 1D                     PUSH 0x1d
004E8447  6A 0B                     PUSH 0xb
004E8449  6A 0A                     PUSH 0xa
004E844B  6A 09                     PUSH 0x9
004E844D  6A 08                     PUSH 0x8
004E844F  6A 07                     PUSH 0x7
004E8451  6A 05                     PUSH 0x5
004E8453  6A 04                     PUSH 0x4
004E8455  6A 03                     PUSH 0x3
004E8457  6A 02                     PUSH 0x2
004E8459  6A 01                     PUSH 0x1
004E845B  6A 00                     PUSH 0x0
004E845D  68 B0 0F 80 00            PUSH 0x800fb0
004E8462  E8 F9 88 1C 00            CALL 0x006b0d60
004E8467  83 C4 70                  ADD ESP,0x70
004E846A  6A FF                     PUSH -0x1
004E846C  6A 1C                     PUSH 0x1c
004E846E  6A 1B                     PUSH 0x1b
004E8470  6A 1A                     PUSH 0x1a
004E8472  6A 19                     PUSH 0x19
004E8474  6A 18                     PUSH 0x18
004E8476  6A 17                     PUSH 0x17
004E8478  6A 16                     PUSH 0x16
004E847A  6A 15                     PUSH 0x15
004E847C  6A 14                     PUSH 0x14
004E847E  6A 20                     PUSH 0x20
004E8480  6A 1E                     PUSH 0x1e
004E8482  6A 1D                     PUSH 0x1d
004E8484  6A 0B                     PUSH 0xb
004E8486  6A 0A                     PUSH 0xa
004E8488  6A 09                     PUSH 0x9
004E848A  6A 08                     PUSH 0x8
004E848C  6A 07                     PUSH 0x7
004E848E  6A 05                     PUSH 0x5
004E8490  6A 04                     PUSH 0x4
004E8492  6A 03                     PUSH 0x3
004E8494  6A 02                     PUSH 0x2
004E8496  6A 01                     PUSH 0x1
004E8498  6A 00                     PUSH 0x0
004E849A  68 C0 0F 80 00            PUSH 0x800fc0
004E849F  E8 BC 88 1C 00            CALL 0x006b0d60
004E84A4  6A FF                     PUSH -0x1
004E84A6  6A 41                     PUSH 0x41
004E84A8  6A 40                     PUSH 0x40
004E84AA  6A 3F                     PUSH 0x3f
004E84AC  6A 3E                     PUSH 0x3e
004E84AE  6A 3C                     PUSH 0x3c
004E84B0  6A 3B                     PUSH 0x3b
004E84B2  6A 3A                     PUSH 0x3a
004E84B4  6A 39                     PUSH 0x39
004E84B6  6A 38                     PUSH 0x38
004E84B8  6A 37                     PUSH 0x37
004E84BA  6A 36                     PUSH 0x36
004E84BC  6A 35                     PUSH 0x35
004E84BE  6A 34                     PUSH 0x34
004E84C0  6A 33                     PUSH 0x33
004E84C2  6A 32                     PUSH 0x32
004E84C4  6A 31                     PUSH 0x31
004E84C6  6A 30                     PUSH 0x30
004E84C8  6A 2F                     PUSH 0x2f
004E84CA  6A 2E                     PUSH 0x2e
004E84CC  6A 2D                     PUSH 0x2d
004E84CE  6A 2C                     PUSH 0x2c
004E84D0  6A 2B                     PUSH 0x2b
004E84D2  6A 2A                     PUSH 0x2a
004E84D4  6A 29                     PUSH 0x29
004E84D6  6A 28                     PUSH 0x28
004E84D8  6A 27                     PUSH 0x27
004E84DA  6A 26                     PUSH 0x26
004E84DC  6A 25                     PUSH 0x25
004E84DE  6A 24                     PUSH 0x24
004E84E0  6A 23                     PUSH 0x23
004E84E2  6A 22                     PUSH 0x22
004E84E4  6A 21                     PUSH 0x21
004E84E6  68 D0 0F 80 00            PUSH 0x800fd0
004E84EB  E8 70 88 1C 00            CALL 0x006b0d60
004E84F0  81 C4 EC 00 00 00         ADD ESP,0xec
004E84F6  6A FF                     PUSH -0x1
004E84F8  6A 1C                     PUSH 0x1c
004E84FA  6A 1B                     PUSH 0x1b
004E84FC  6A 1A                     PUSH 0x1a
004E84FE  6A 19                     PUSH 0x19
004E8500  6A 18                     PUSH 0x18
004E8502  6A 17                     PUSH 0x17
004E8504  6A 16                     PUSH 0x16
004E8506  6A 15                     PUSH 0x15
004E8508  6A 14                     PUSH 0x14
004E850A  68 80 13 80 00            PUSH 0x801380
004E850F  E8 4C 88 1C 00            CALL 0x006b0d60
004E8514  6A FF                     PUSH -0x1
004E8516  6A 1F                     PUSH 0x1f
004E8518  6A 13                     PUSH 0x13
004E851A  6A 12                     PUSH 0x12
004E851C  6A 11                     PUSH 0x11
004E851E  6A 10                     PUSH 0x10
004E8520  6A 0F                     PUSH 0xf
004E8522  6A 0E                     PUSH 0xe
004E8524  6A 0D                     PUSH 0xd
004E8526  6A 0C                     PUSH 0xc
004E8528  68 90 13 80 00            PUSH 0x801390
004E852D  E8 2E 88 1C 00            CALL 0x006b0d60
004E8532  83 C4 58                  ADD ESP,0x58
004E8535  6A FF                     PUSH -0x1
004E8537  68 A0 13 80 00            PUSH 0x8013a0
004E853C  E8 1F 88 1C 00            CALL 0x006b0d60
004E8541  6A FF                     PUSH -0x1
004E8543  6A 34                     PUSH 0x34
004E8545  6A 39                     PUSH 0x39
004E8547  6A 0D                     PUSH 0xd
004E8549  6A 18                     PUSH 0x18
004E854B  6A 0C                     PUSH 0xc
004E854D  6A 14                     PUSH 0x14
004E854F  68 20 14 80 00            PUSH 0x801420
004E8554  E8 07 88 1C 00            CALL 0x006b0d60
004E8559  6A FF                     PUSH -0x1
004E855B  6A 36                     PUSH 0x36
004E855D  6A 3F                     PUSH 0x3f
004E855F  6A 38                     PUSH 0x38
004E8561  6A 37                     PUSH 0x37
004E8563  6A 35                     PUSH 0x35
004E8565  6A 33                     PUSH 0x33
004E8567  6A 15                     PUSH 0x15
004E8569  6A 1F                     PUSH 0x1f
004E856B  6A 19                     PUSH 0x19
004E856D  6A 10                     PUSH 0x10
004E856F  68 E0 13 80 00            PUSH 0x8013e0
004E8574  E8 E7 87 1C 00            CALL 0x006b0d60
004E8579  83 C4 58                  ADD ESP,0x58
004E857C  6A FF                     PUSH -0x1
004E857E  6A 3B                     PUSH 0x3b
004E8580  6A 3D                     PUSH 0x3d
004E8582  6A 0F                     PUSH 0xf
004E8584  6A 1B                     PUSH 0x1b
004E8586  6A 0B                     PUSH 0xb
004E8588  6A 1A                     PUSH 0x1a
004E858A  68 E0 0E 80 00            PUSH 0x800ee0
004E858F  E8 CC 87 1C 00            CALL 0x006b0d60
004E8594  6A FF                     PUSH -0x1
004E8596  6A 2A                     PUSH 0x2a
004E8598  6A 28                     PUSH 0x28
004E859A  6A 27                     PUSH 0x27
004E859C  6A 26                     PUSH 0x26
004E859E  6A 25                     PUSH 0x25
004E85A0  6A 24                     PUSH 0x24
004E85A2  6A 23                     PUSH 0x23
004E85A4  6A 22                     PUSH 0x22
004E85A6  6A 21                     PUSH 0x21
004E85A8  6A 17                     PUSH 0x17
004E85AA  6A 0E                     PUSH 0xe
004E85AC  6A 03                     PUSH 0x3
004E85AE  6A 00                     PUSH 0x0
004E85B0  68 90 14 80 00            PUSH 0x801490
004E85B5  E8 A6 87 1C 00            CALL 0x006b0d60
004E85BA  83 C4 5C                  ADD ESP,0x5c
004E85BD  6A FF                     PUSH -0x1
004E85BF  6A 30                     PUSH 0x30
004E85C1  6A 29                     PUSH 0x29
004E85C3  6A 01                     PUSH 0x1
004E85C5  6A 16                     PUSH 0x16
004E85C7  6A 02                     PUSH 0x2
004E85C9  68 20 0F 80 00            PUSH 0x800f20
004E85CE  E8 8D 87 1C 00            CALL 0x006b0d60
004E85D3  6A FF                     PUSH -0x1
004E85D5  6A 2D                     PUSH 0x2d
004E85D7  6A 31                     PUSH 0x31
004E85D9  6A 20                     PUSH 0x20
004E85DB  68 F0 0E 80 00            PUSH 0x800ef0
004E85E0  E8 7B 87 1C 00            CALL 0x006b0d60
004E85E5  6A FF                     PUSH -0x1
004E85E7  6A 32                     PUSH 0x32
004E85E9  6A 2F                     PUSH 0x2f
004E85EB  6A 2E                     PUSH 0x2e
004E85ED  6A 2C                     PUSH 0x2c
004E85EF  6A 09                     PUSH 0x9
004E85F1  6A 08                     PUSH 0x8
004E85F3  6A 1E                     PUSH 0x1e
004E85F5  6A 1D                     PUSH 0x1d
004E85F7  6A 07                     PUSH 0x7
004E85F9  68 30 14 80 00            PUSH 0x801430
004E85FE  E8 5D 87 1C 00            CALL 0x006b0d60
004E8603  83 C4 5C                  ADD ESP,0x5c
004E8606  6A FF                     PUSH -0x1
004E8608  6A 3C                     PUSH 0x3c
004E860A  6A 41                     PUSH 0x41
004E860C  6A 3A                     PUSH 0x3a
004E860E  6A 40                     PUSH 0x40
004E8610  6A 3E                     PUSH 0x3e
004E8612  6A 1C                     PUSH 0x1c
004E8614  6A 13                     PUSH 0x13
004E8616  6A 12                     PUSH 0x12
004E8618  6A 11                     PUSH 0x11
004E861A  6A 05                     PUSH 0x5
004E861C  68 40 14 80 00            PUSH 0x801440
004E8621  E8 3A 87 1C 00            CALL 0x006b0d60
004E8626  6A FF                     PUSH -0x1
004E8628  6A 2B                     PUSH 0x2b
004E862A  6A 04                     PUSH 0x4
004E862C  6A 0A                     PUSH 0xa
004E862E  68 60 0F 80 00            PUSH 0x800f60
004E8633  E8 28 87 1C 00            CALL 0x006b0d60
004E8638  83 C4 44                  ADD ESP,0x44
004E863B  6A FF                     PUSH -0x1
004E863D  6A 5B                     PUSH 0x5b
004E863F  6A 55                     PUSH 0x55
004E8641  6A 49                     PUSH 0x49
004E8643  68 00 10 80 00            PUSH 0x801000
004E8648  E8 13 87 1C 00            CALL 0x006b0d60
004E864D  6A FF                     PUSH -0x1
004E864F  6A 5A                     PUSH 0x5a
004E8651  6A 59                     PUSH 0x59
004E8653  6A 4D                     PUSH 0x4d
004E8655  68 10 10 80 00            PUSH 0x801010
004E865A  E8 01 87 1C 00            CALL 0x006b0d60
004E865F  6A FF                     PUSH -0x1
004E8661  6A 61                     PUSH 0x61
004E8663  6A 60                     PUSH 0x60
004E8665  6A 5F                     PUSH 0x5f
004E8667  6A 50                     PUSH 0x50
004E8669  6A 44                     PUSH 0x44
004E866B  6A 43                     PUSH 0x43
004E866D  6A 4F                     PUSH 0x4f
004E866F  6A 42                     PUSH 0x42
004E8671  6A 4E                     PUSH 0x4e
004E8673  6A 51                     PUSH 0x51
004E8675  6A 4B                     PUSH 0x4b
004E8677  68 00 0F 80 00            PUSH 0x800f00
004E867C  E8 DF 86 1C 00            CALL 0x006b0d60
004E8681  83 C4 5C                  ADD ESP,0x5c
004E8684  6A FF                     PUSH -0x1
004E8686  6A 65                     PUSH 0x65
004E8688  6A 63                     PUSH 0x63
004E868A  6A 62                     PUSH 0x62
004E868C  6A 46                     PUSH 0x46
004E868E  6A 52                     PUSH 0x52
004E8690  6A 53                     PUSH 0x53
004E8692  6A 47                     PUSH 0x47
004E8694  6A 45                     PUSH 0x45
004E8696  68 70 13 80 00            PUSH 0x801370
004E869B  E8 C0 86 1C 00            CALL 0x006b0d60
004E86A0  6A FF                     PUSH -0x1
004E86A2  6A 5E                     PUSH 0x5e
004E86A4  6A 5C                     PUSH 0x5c
004E86A6  6A 54                     PUSH 0x54
004E86A8  6A 48                     PUSH 0x48
004E86AA  68 A0 0F 80 00            PUSH 0x800fa0
004E86AF  E8 AC 86 1C 00            CALL 0x006b0d60
004E86B4  83 C4 40                  ADD ESP,0x40
004E86B7  6A FF                     PUSH -0x1
004E86B9  6A 64                     PUSH 0x64
004E86BB  6A 5D                     PUSH 0x5d
004E86BD  6A 4C                     PUSH 0x4c
004E86BF  6A 66                     PUSH 0x66
004E86C1  6A 57                     PUSH 0x57
004E86C3  6A 58                     PUSH 0x58
004E86C5  68 F0 0F 80 00            PUSH 0x800ff0
004E86CA  E8 91 86 1C 00            CALL 0x006b0d60
004E86CF  6A FF                     PUSH -0x1
004E86D1  6A 56                     PUSH 0x56
004E86D3  6A 4A                     PUSH 0x4a
004E86D5  68 60 14 80 00            PUSH 0x801460
004E86DA  E8 81 86 1C 00            CALL 0x006b0d60
004E86DF  6A FF                     PUSH -0x1
004E86E1  6A 69                     PUSH 0x69
004E86E3  6A 68                     PUSH 0x68
004E86E5  6A 67                     PUSH 0x67
004E86E7  68 E0 0F 80 00            PUSH 0x800fe0
004E86EC  E8 6F 86 1C 00            CALL 0x006b0d60
004E86F1  A1 10 10 80 00            MOV EAX,[0x00801010]
004E86F6  8B 0D 00 10 80 00         MOV ECX,dword ptr [0x00801000]
004E86FC  8B 3D 04 10 80 00         MOV EDI,dword ptr [0x00801004]
004E8702  8B 15 18 10 80 00         MOV EDX,dword ptr [0x00801018]
004E8708  8B 35 08 10 80 00         MOV ESI,dword ptr [0x00801008]
004E870E  0B C1                     OR EAX,ECX
004E8710  8B 0D 14 10 80 00         MOV ECX,dword ptr [0x00801014]
004E8716  83 C4 44                  ADD ESP,0x44
004E8719  0B CF                     OR ECX,EDI
004E871B  8B 3D 0C 10 80 00         MOV EDI,dword ptr [0x0080100c]
004E8721  0B D6                     OR EDX,ESI
004E8723  8B 35 1C 10 80 00         MOV ESI,dword ptr [0x0080101c]
004E8729  0B F7                     OR ESI,EDI
004E872B  8B 3D A0 0F 80 00         MOV EDI,dword ptr [0x00800fa0]
004E8731  0B C7                     OR EAX,EDI
004E8733  8B 3D A4 0F 80 00         MOV EDI,dword ptr [0x00800fa4]
004E8739  0B F9                     OR EDI,ECX
004E873B  8B 0D A8 0F 80 00         MOV ECX,dword ptr [0x00800fa8]
004E8741  0B CA                     OR ECX,EDX
004E8743  8B 15 AC 0F 80 00         MOV EDX,dword ptr [0x00800fac]
004E8749  A3 50 14 80 00            MOV [0x00801450],EAX
004E874E  A1 F0 0F 80 00            MOV EAX,[0x00800ff0]
004E8753  89 0D 58 14 80 00         MOV dword ptr [0x00801458],ECX
004E8759  8B 0D 70 13 80 00         MOV ECX,dword ptr [0x00801370]
004E875F  0B D6                     OR EDX,ESI
004E8761  8B 35 78 13 80 00         MOV ESI,dword ptr [0x00801378]
004E8767  89 3D 54 14 80 00         MOV dword ptr [0x00801454],EDI
004E876D  8B 3D 74 13 80 00         MOV EDI,dword ptr [0x00801374]
004E8773  89 15 5C 14 80 00         MOV dword ptr [0x0080145c],EDX
004E8779  8B 15 F8 0F 80 00         MOV EDX,dword ptr [0x00800ff8]
004E877F  0B C1                     OR EAX,ECX
004E8781  8B 0D F4 0F 80 00         MOV ECX,dword ptr [0x00800ff4]
004E8787  0B CF                     OR ECX,EDI
004E8789  8B 3D 7C 13 80 00         MOV EDI,dword ptr [0x0080137c]
004E878F  0B D6                     OR EDX,ESI
004E8791  8B 35 FC 0F 80 00         MOV ESI,dword ptr [0x00800ffc]
004E8797  0B F7                     OR ESI,EDI
004E8799  8B 3D E0 0F 80 00         MOV EDI,dword ptr [0x00800fe0]
004E879F  0B C7                     OR EAX,EDI
004E87A1  8B 3D E4 0F 80 00         MOV EDI,dword ptr [0x00800fe4]
004E87A7  0B F9                     OR EDI,ECX
004E87A9  8B 0D E8 0F 80 00         MOV ECX,dword ptr [0x00800fe8]
004E87AF  A3 10 0F 80 00            MOV [0x00800f10],EAX
004E87B4  A1 00 0F 80 00            MOV EAX,[0x00800f00]
004E87B9  0B CA                     OR ECX,EDX
004E87BB  8B 15 EC 0F 80 00         MOV EDX,dword ptr [0x00800fec]
004E87C1  89 0D 18 0F 80 00         MOV dword ptr [0x00800f18],ECX
004E87C7  8B 0D 04 0F 80 00         MOV ECX,dword ptr [0x00800f04]
004E87CD  A3 80 14 80 00            MOV [0x00801480],EAX
004E87D2  A1 0C 0F 80 00            MOV EAX,[0x00800f0c]
004E87D7  0B D6                     OR EDX,ESI
004E87D9  8B 35 98 14 80 00         MOV ESI,dword ptr [0x00801498]
004E87DF  89 15 1C 0F 80 00         MOV dword ptr [0x00800f1c],EDX
004E87E5  8B 15 08 0F 80 00         MOV EDX,dword ptr [0x00800f08]
004E87EB  89 0D 84 14 80 00         MOV dword ptr [0x00801484],ECX
004E87F1  8B 0D 90 14 80 00         MOV ECX,dword ptr [0x00801490]
004E87F7  A3 8C 14 80 00            MOV [0x0080148c],EAX
004E87FC  A1 20 0F 80 00            MOV EAX,[0x00800f20]
004E8801  89 3D 14 0F 80 00         MOV dword ptr [0x00800f14],EDI
004E8807  8B 3D 94 14 80 00         MOV EDI,dword ptr [0x00801494]
004E880D  89 15 88 14 80 00         MOV dword ptr [0x00801488],EDX
004E8813  8B 15 28 0F 80 00         MOV EDX,dword ptr [0x00800f28]
004E8819  0B C1                     OR EAX,ECX
004E881B  8B 0D 24 0F 80 00         MOV ECX,dword ptr [0x00800f24]
004E8821  0B CF                     OR ECX,EDI
004E8823  8B 3D 9C 14 80 00         MOV EDI,dword ptr [0x0080149c]
004E8829  0B D6                     OR EDX,ESI
004E882B  8B 35 2C 0F 80 00         MOV ESI,dword ptr [0x00800f2c]
004E8831  0B F7                     OR ESI,EDI
004E8833  8B 3D 60 0F 80 00         MOV EDI,dword ptr [0x00800f60]
004E8839  0B C7                     OR EAX,EDI
004E883B  8B 3D 64 0F 80 00         MOV EDI,dword ptr [0x00800f64]
004E8841  0B F9                     OR EDI,ECX
004E8843  8B 0D 68 0F 80 00         MOV ECX,dword ptr [0x00800f68]
004E8849  0B CA                     OR ECX,EDX
004E884B  8B 15 6C 0F 80 00         MOV EDX,dword ptr [0x00800f6c]
004E8851  A3 A0 14 80 00            MOV [0x008014a0],EAX
004E8856  A1 30 14 80 00            MOV EAX,[0x00801430]
004E885B  89 0D A8 14 80 00         MOV dword ptr [0x008014a8],ECX
004E8861  8B 0D F0 0E 80 00         MOV ECX,dword ptr [0x00800ef0]
004E8867  0B D6                     OR EDX,ESI
004E8869  8B 35 F8 0E 80 00         MOV ESI,dword ptr [0x00800ef8]
004E886F  89 3D A4 14 80 00         MOV dword ptr [0x008014a4],EDI
004E8875  8B 3D F4 0E 80 00         MOV EDI,dword ptr [0x00800ef4]
004E887B  0B C1                     OR EAX,ECX
004E887D  8B 0D 34 14 80 00         MOV ECX,dword ptr [0x00801434]
004E8883  89 15 AC 14 80 00         MOV dword ptr [0x008014ac],EDX
004E8889  8B 15 38 14 80 00         MOV EDX,dword ptr [0x00801438]
004E888F  0B CF                     OR ECX,EDI
004E8891  0B D6                     OR EDX,ESI
004E8893  8B 35 3C 14 80 00         MOV ESI,dword ptr [0x0080143c]
004E8899  8B 3D FC 0E 80 00         MOV EDI,dword ptr [0x00800efc]
004E889F  A3 80 0F 80 00            MOV [0x00800f80],EAX
004E88A4  A1 E0 13 80 00            MOV EAX,[0x008013e0]
004E88A9  89 0D 84 0F 80 00         MOV dword ptr [0x00800f84],ECX
004E88AF  8B 0D 20 14 80 00         MOV ECX,dword ptr [0x00801420]
004E88B5  0B F7                     OR ESI,EDI
004E88B7  8B 3D 24 14 80 00         MOV EDI,dword ptr [0x00801424]
004E88BD  89 15 88 0F 80 00         MOV dword ptr [0x00800f88],EDX
004E88C3  8B 15 E8 13 80 00         MOV EDX,dword ptr [0x008013e8]
004E88C9  89 35 8C 0F 80 00         MOV dword ptr [0x00800f8c],ESI
004E88CF  8B 35 28 14 80 00         MOV ESI,dword ptr [0x00801428]
004E88D5  0B C1                     OR EAX,ECX
004E88D7  8B 0D E4 13 80 00         MOV ECX,dword ptr [0x008013e4]
004E88DD  0B CF                     OR ECX,EDI
004E88DF  8B 3D 2C 14 80 00         MOV EDI,dword ptr [0x0080142c]
004E88E5  0B D6                     OR EDX,ESI
004E88E7  8B 35 EC 13 80 00         MOV ESI,dword ptr [0x008013ec]
004E88ED  A3 90 0F 80 00            MOV [0x00800f90],EAX
004E88F2  A1 40 14 80 00            MOV EAX,[0x00801440]
004E88F7  89 0D 94 0F 80 00         MOV dword ptr [0x00800f94],ECX
004E88FD  8B 0D E0 0E 80 00         MOV ECX,dword ptr [0x00800ee0]
004E8903  0B F7                     OR ESI,EDI
004E8905  8B 3D E4 0E 80 00         MOV EDI,dword ptr [0x00800ee4]
004E890B  89 15 98 0F 80 00         MOV dword ptr [0x00800f98],EDX
004E8911  8B 15 48 14 80 00         MOV EDX,dword ptr [0x00801448]
004E8917  89 35 9C 0F 80 00         MOV dword ptr [0x00800f9c],ESI
004E891D  8B 35 E8 0E 80 00         MOV ESI,dword ptr [0x00800ee8]
004E8923  0B C1                     OR EAX,ECX
004E8925  8B 0D 44 14 80 00         MOV ECX,dword ptr [0x00801444]
004E892B  0B CF                     OR ECX,EDI
004E892D  8B 3D EC 0E 80 00         MOV EDI,dword ptr [0x00800eec]
004E8933  0B D6                     OR EDX,ESI
004E8935  8B 35 4C 14 80 00         MOV ESI,dword ptr [0x0080144c]
004E893B  0B F7                     OR ESI,EDI
004E893D  5F                        POP EDI
004E893E  89 35 6C 13 80 00         MOV dword ptr [0x0080136c],ESI
004E8944  A3 60 13 80 00            MOV [0x00801360],EAX
004E8949  89 0D 64 13 80 00         MOV dword ptr [0x00801364],ECX
004E894F  89 15 68 13 80 00         MOV dword ptr [0x00801368],EDX
004E8955  5E                        POP ESI
004E8956  C3                        RET
