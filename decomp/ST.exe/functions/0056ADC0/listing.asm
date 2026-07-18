FUN_0056adc0:
0056ADC0  55                        PUSH EBP
0056ADC1  8B EC                     MOV EBP,ESP
0056ADC3  81 EC 5C 05 00 00         SUB ESP,0x55c
0056ADC9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0056ADCE  53                        PUSH EBX
0056ADCF  56                        PUSH ESI
0056ADD0  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0056ADD3  57                        PUSH EDI
0056ADD4  8D 95 58 FF FF FF         LEA EDX,[EBP + 0xffffff58]
0056ADDA  8D 8D 54 FF FF FF         LEA ECX,[EBP + 0xffffff54]
0056ADE0  6A 00                     PUSH 0x0
0056ADE2  52                        PUSH EDX
0056ADE3  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
0056ADE9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056ADEF  E8 FC 29 1C 00            CALL 0x0072d7f0
0056ADF4  8B F0                     MOV ESI,EAX
0056ADF6  83 C4 08                  ADD ESP,0x8
0056ADF9  85 F6                     TEST ESI,ESI
0056ADFB  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
0056ADFE  0F 85 55 12 00 00         JNZ 0x0056c059
0056AE04  E8 D8 AD E9 FF            CALL 0x00405be1
0056AE09  85 C0                     TEST EAX,EAX
0056AE0B  74 47                     JZ 0x0056ae54
0056AE0D  68 00 E0 85 00            PUSH 0x85e000
0056AE12  FF 15 70 BC 85 00         CALL dword ptr [0x0085bc70]
0056AE18  56                        PUSH ESI
0056AE19  68 3C 9E 7C 00            PUSH 0x7c9e3c
0056AE1E  FF 15 18 BE 85 00         CALL dword ptr [0x0085be18]
0056AE24  8B F0                     MOV ESI,EAX
0056AE26  85 F6                     TEST ESI,ESI
0056AE28  74 10                     JZ 0x0056ae3a
0056AE2A  56                        PUSH ESI
0056AE2B  FF 15 14 BE 85 00         CALL dword ptr [0x0085be14]
0056AE31  6A 09                     PUSH 0x9
0056AE33  56                        PUSH ESI
0056AE34  FF 15 10 BE 85 00         CALL dword ptr [0x0085be10]
LAB_0056ae3a:
0056AE3A  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0056AE3F  68 3E 01 00 00            PUSH 0x13e
0056AE44  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056AE49  50                        PUSH EAX
0056AE4A  68 09 00 FE AF            PUSH 0xaffe0009
0056AE4F  E8 EC AF 13 00            CALL 0x006a5e40
LAB_0056ae54:
0056AE54  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0056AE57  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0056AE5A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0056AE5D  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0056AE60  53                        PUSH EBX
0056AE61  51                        PUSH ECX
0056AE62  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0056AE65  52                        PUSH EDX
0056AE66  56                        PUSH ESI
0056AE67  E8 A4 86 17 00            CALL 0x006e3510
0056AE6C  B9 0A 00 00 00            MOV ECX,0xa
0056AE71  33 C0                     XOR EAX,EAX
0056AE73  8D 7D 98                  LEA EDI,[EBP + -0x68]
0056AE76  50                        PUSH EAX
0056AE77  F3 AB                     STOSD.REP ES:EDI
0056AE79  89 35 44 67 80 00         MOV dword ptr [0x00806744],ESI
0056AE7F  C7 05 30 67 80 00 20 03 00 00  MOV dword ptr [0x00806730],0x320
0056AE89  C7 05 34 67 80 00 58 02 00 00  MOV dword ptr [0x00806734],0x258
0056AE93  C7 05 38 67 80 00 08 00 00 00  MOV dword ptr [0x00806738],0x8
0056AE9D  C7 45 9C 1D 25 40 00      MOV dword ptr [EBP + -0x64],0x40251d
0056AEA4  89 75 A8                  MOV dword ptr [EBP + -0x58],ESI
0056AEA7  FF 15 74 BA 85 00         CALL dword ptr [0x0085ba74]
0056AEAD  6A 65                     PUSH 0x65
0056AEAF  56                        PUSH ESI
0056AEB0  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0056AEB3  FF 15 0C BE 85 00         CALL dword ptr [0x0085be0c]
0056AEB9  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0056AEBC  8D 45 98                  LEA EAX,[EBP + -0x68]
0056AEBF  50                        PUSH EAX
0056AEC0  C7 45 BC 3C 9E 7C 00      MOV dword ptr [EBP + -0x44],0x7c9e3c
0056AEC7  FF 15 08 BE 85 00         CALL dword ptr [0x0085be08]
0056AECD  66 85 C0                  TEST AX,AX
0056AED0  75 18                     JNZ 0x0056aeea
0056AED2  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0056AED8  68 4E 01 00 00            PUSH 0x14e
0056AEDD  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056AEE2  51                        PUSH ECX
0056AEE3  6A FF                     PUSH -0x1
0056AEE5  E8 56 AF 13 00            CALL 0x006a5e40
LAB_0056aeea:
0056AEEA  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
0056AEF0  A1 30 67 80 00            MOV EAX,[0x00806730]
0056AEF5  6A 00                     PUSH 0x0
0056AEF7  56                        PUSH ESI
0056AEF8  6A 00                     PUSH 0x0
0056AEFA  6A 00                     PUSH 0x0
0056AEFC  52                        PUSH EDX
0056AEFD  50                        PUSH EAX
0056AEFE  6A 00                     PUSH 0x0
0056AF00  6A 00                     PUSH 0x0
0056AF02  68 00 00 00 80            PUSH 0x80000000
0056AF07  68 4C 9E 7C 00            PUSH 0x7c9e4c
0056AF0C  68 3C 9E 7C 00            PUSH 0x7c9e3c
0056AF11  6A 00                     PUSH 0x0
0056AF13  FF 15 04 BE 85 00         CALL dword ptr [0x0085be04]
0056AF19  85 C0                     TEST EAX,EAX
0056AF1B  A3 48 67 80 00            MOV [0x00806748],EAX
0056AF20  75 1D                     JNZ 0x0056af3f
0056AF22  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0056AF28  68 52 01 00 00            PUSH 0x152
0056AF2D  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056AF32  51                        PUSH ECX
0056AF33  6A FF                     PUSH -0x1
0056AF35  E8 06 AF 13 00            CALL 0x006a5e40
0056AF3A  A1 48 67 80 00            MOV EAX,[0x00806748]
LAB_0056af3f:
0056AF3F  53                        PUSH EBX
0056AF40  50                        PUSH EAX
0056AF41  A3 78 6D 85 00            MOV [0x00856d78],EAX
0056AF46  FF 15 10 BE 85 00         CALL dword ptr [0x0085be10]
0056AF4C  8B 15 48 67 80 00         MOV EDX,dword ptr [0x00806748]
0056AF52  52                        PUSH EDX
0056AF53  FF 15 00 BE 85 00         CALL dword ptr [0x0085be00]
0056AF59  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0056AF5C  A1 48 67 80 00            MOV EAX,[0x00806748]
0056AF61  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0056AF67  83 C1 38                  ADD ECX,0x38
0056AF6A  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0056AF6D  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0056AF70  8D 8D D0 FE FF FF         LEA ECX,[EBP + 0xfffffed0]
0056AF76  8D 85 CC FE FF FF         LEA EAX,[EBP + 0xfffffecc]
0056AF7C  6A 00                     PUSH 0x0
0056AF7E  51                        PUSH ECX
0056AF7F  89 95 CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],EDX
0056AF85  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056AF8A  E8 61 28 1C 00            CALL 0x0072d7f0
0056AF8F  83 C4 08                  ADD ESP,0x8
0056AF92  85 C0                     TEST EAX,EAX
0056AF94  75 2E                     JNZ 0x0056afc4
0056AF96  8B 75 D0                  MOV ESI,dword ptr [EBP + -0x30]
0056AF99  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
0056AF9C  52                        PUSH EDX
0056AF9D  8D 46 04                  LEA EAX,[ESI + 0x4]
0056AFA0  C7 06 01 00 00 00         MOV dword ptr [ESI],0x1
0056AFA6  50                        PUSH EAX
0056AFA7  E8 74 C9 14 00            CALL 0x006b7920
0056AFAC  85 C0                     TEST EAX,EAX
0056AFAE  74 06                     JZ 0x0056afb6
0056AFB0  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_0056afb6:
0056AFB6  8B 8D CC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffecc]
0056AFBC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056AFC2  EB 15                     JMP 0x0056afd9
LAB_0056afc4:
0056AFC4  8B 95 CC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffecc]
0056AFCA  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0056AFCD  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0056AFD3  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
LAB_0056afd9:
0056AFD9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0056AFDC  6A 01                     PUSH 0x1
0056AFDE  83 C1 38                  ADD ECX,0x38
0056AFE1  E8 31 76 E9 FF            CALL 0x00402617
0056AFE6  85 C0                     TEST EAX,EAX
0056AFE8  75 1B                     JNZ 0x0056b005
0056AFEA  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0056AFF0  68 59 01 00 00            PUSH 0x159
0056AFF5  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056AFFA  52                        PUSH EDX
0056AFFB  68 0A 00 FE AF            PUSH 0xaffe000a
0056B000  E8 3B AE 13 00            CALL 0x006a5e40
LAB_0056b005:
0056B005  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0056B00A  8D 95 C0 FD FF FF         LEA EDX,[EBP + 0xfffffdc0]
0056B010  8D 8D BC FD FF FF         LEA ECX,[EBP + 0xfffffdbc]
0056B016  6A 00                     PUSH 0x0
0056B018  52                        PUSH EDX
0056B019  89 85 BC FD FF FF         MOV dword ptr [EBP + 0xfffffdbc],EAX
0056B01F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056B025  E8 C6 27 1C 00            CALL 0x0072d7f0
0056B02A  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0056B02D  83 C4 08                  ADD ESP,0x8
0056B030  85 C0                     TEST EAX,EAX
0056B032  0F 85 06 01 00 00         JNZ 0x0056b13e
0056B038  A1 30 B0 79 00            MOV EAX,[0x0079b030]
0056B03D  8D 73 60                  LEA ESI,[EBX + 0x60]
0056B040  68 C0 A0 7C 00            PUSH 0x7ca0c0
0056B045  50                        PUSH EAX
0056B046  8D BB 1A 7D 00 00         LEA EDI,[EBX + 0x7d1a]
0056B04C  56                        PUSH ESI
0056B04D  68 DC 6E 7C 00            PUSH 0x7c6edc
0056B052  57                        PUSH EDI
0056B053  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0056B059  6A 00                     PUSH 0x0
0056B05B  6A 00                     PUSH 0x0
0056B05D  6A 00                     PUSH 0x0
0056B05F  57                        PUSH EDI
0056B060  68 45 03 00 00            PUSH 0x345
0056B065  E8 56 5E 18 00            CALL 0x006f0ec0
0056B06A  50                        PUSH EAX
0056B06B  A3 80 67 80 00            MOV [0x00806780],EAX
0056B070  E8 4B E7 19 00            CALL 0x007097c0
0056B075  8B 0D 48 B0 79 00         MOV ECX,dword ptr [0x0079b048]
0056B07B  8D 93 70 04 00 00         LEA EDX,[EBX + 0x470]
0056B081  51                        PUSH ECX
0056B082  52                        PUSH EDX
0056B083  68 E4 6E 7C 00            PUSH 0x7c6ee4
0056B088  57                        PUSH EDI
0056B089  A3 84 67 80 00            MOV [0x00806784],EAX
0056B08E  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0056B094  6A 00                     PUSH 0x0
0056B096  6A 00                     PUSH 0x0
0056B098  6A 00                     PUSH 0x0
0056B09A  57                        PUSH EDI
0056B09B  68 45 03 00 00            PUSH 0x345
0056B0A0  E8 1B 5E 18 00            CALL 0x006f0ec0
0056B0A5  8B 0D 30 B0 79 00         MOV ECX,dword ptr [0x0079b030]
0056B0AB  83 C4 50                  ADD ESP,0x50
0056B0AE  A3 98 67 80 00            MOV [0x00806798],EAX
0056B0B3  A1 4C B0 79 00            MOV EAX,[0x0079b04c]
0056B0B8  50                        PUSH EAX
0056B0B9  51                        PUSH ECX
0056B0BA  56                        PUSH ESI
0056B0BB  68 DC 6E 7C 00            PUSH 0x7c6edc
0056B0C0  57                        PUSH EDI
0056B0C1  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0056B0C7  6A 00                     PUSH 0x0
0056B0C9  6A 00                     PUSH 0x0
0056B0CB  6A 00                     PUSH 0x0
0056B0CD  57                        PUSH EDI
0056B0CE  68 45 03 00 00            PUSH 0x345
0056B0D3  E8 E8 5D 18 00            CALL 0x006f0ec0
0056B0D8  6A 00                     PUSH 0x0
0056B0DA  50                        PUSH EAX
0056B0DB  A3 5C 67 80 00            MOV [0x0080675c],EAX
0056B0E0  E8 A2 82 E9 FF            CALL 0x00403387
0056B0E5  89 83 E2 4E 00 00         MOV dword ptr [EBX + 0x4ee2],EAX
0056B0EB  8B 15 5C 67 80 00         MOV EDX,dword ptr [0x0080675c]
0056B0F1  6A 01                     PUSH 0x1
0056B0F3  52                        PUSH EDX
0056B0F4  E8 8E 82 E9 FF            CALL 0x00403387
0056B0F9  8B 8B E2 4E 00 00         MOV ECX,dword ptr [EBX + 0x4ee2]
0056B0FF  89 83 E6 4E 00 00         MOV dword ptr [EBX + 0x4ee6],EAX
0056B105  83 C4 38                  ADD ESP,0x38
0056B108  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0056B10B  85 D2                     TEST EDX,EDX
0056B10D  74 07                     JZ 0x0056b116
0056B10F  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0056B112  85 C9                     TEST ECX,ECX
0056B114  75 1B                     JNZ 0x0056b131
LAB_0056b116:
0056B116  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0056B11C  68 67 01 00 00            PUSH 0x167
0056B121  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056B126  52                        PUSH EDX
0056B127  68 0D 00 FE AF            PUSH 0xaffe000d
0056B12C  E8 0F AD 13 00            CALL 0x006a5e40
LAB_0056b131:
0056B131  8B 85 BC FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdbc]
0056B137  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056B13C  EB 22                     JMP 0x0056b160
LAB_0056b13e:
0056B13E  8B 8D BC FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffdbc]
0056B144  68 69 01 00 00            PUSH 0x169
0056B149  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056B14E  6A 00                     PUSH 0x0
0056B150  68 0D 00 FE AF            PUSH 0xaffe000d
0056B155  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056B15B  E8 E0 AC 13 00            CALL 0x006a5e40
LAB_0056b160:
0056B160  8B 15 48 67 80 00         MOV EDX,dword ptr [0x00806748]
0056B166  81 C3 5A 11 00 00         ADD EBX,0x115a
0056B16C  53                        PUSH EBX
0056B16D  B9 0C 00 00 00            MOV ECX,0xc
0056B172  B8 1E 00 00 00            MOV EAX,0x1e
0056B177  52                        PUSH EDX
0056B178  68 9C 75 80 00            PUSH 0x80759c
0056B17D  89 0D 68 75 80 00         MOV dword ptr [0x00807568],ECX
0056B183  A3 6C 75 80 00            MOV [0x0080756c],EAX
0056B188  C7 05 70 75 80 00 F8 02 00 00  MOV dword ptr [0x00807570],0x2f8
0056B192  C7 05 74 75 80 00 1A 02 00 00  MOV dword ptr [0x00807574],0x21a
0056B19C  89 0D 78 75 80 00         MOV dword ptr [0x00807578],ECX
0056B1A2  A3 7C 75 80 00            MOV [0x0080757c],EAX
0056B1A7  C7 05 80 75 80 00 D8 03 00 00  MOV dword ptr [0x00807580],0x3d8
0056B1B1  C7 05 84 75 80 00 C2 02 00 00  MOV dword ptr [0x00807584],0x2c2
0056B1BB  89 0D 88 75 80 00         MOV dword ptr [0x00807588],ECX
0056B1C1  A3 8C 75 80 00            MOV [0x0080758c],EAX
0056B1C6  C7 05 90 75 80 00 D8 04 00 00  MOV dword ptr [0x00807590],0x4d8
0056B1D0  C7 05 94 75 80 00 C2 03 00 00  MOV dword ptr [0x00807594],0x3c2
0056B1DA  E8 41 E9 14 00            CALL 0x006b9b20
0056B1DF  A1 34 67 80 00            MOV EAX,[0x00806734]
0056B1E4  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
0056B1EA  8B 15 38 67 80 00         MOV EDX,dword ptr [0x00806738]
0056B1F0  68 00 01 00 00            PUSH 0x100
0056B1F5  6A 00                     PUSH 0x0
0056B1F7  6A 00                     PUSH 0x0
0056B1F9  50                        PUSH EAX
0056B1FA  51                        PUSH ECX
0056B1FB  52                        PUSH EDX
0056B1FC  50                        PUSH EAX
0056B1FD  A1 9C 75 80 00            MOV EAX,[0x0080759c]
0056B202  51                        PUSH ECX
0056B203  68 01 00 00 10            PUSH 0x10000001
0056B208  50                        PUSH EAX
0056B209  E8 32 E9 14 00            CALL 0x006b9b40
0056B20E  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
0056B214  51                        PUSH ECX
0056B215  68 A8 75 80 00            PUSH 0x8075a8
0056B21A  E8 E1 60 14 00            CALL 0x006b1300
0056B21F  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
0056B225  6A 01                     PUSH 0x1
0056B227  52                        PUSH EDX
0056B228  E8 F3 08 15 00            CALL 0x006bbb20
0056B22D  A1 9C 75 80 00            MOV EAX,[0x0080759c]
0056B232  6A 01                     PUSH 0x1
0056B234  50                        PUSH EAX
0056B235  E8 46 F5 14 00            CALL 0x006ba780
0056B23A  8B 0D 78 6D 85 00         MOV ECX,dword ptr [0x00856d78]
0056B240  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
0056B246  68 60 26 00 00            PUSH 0x2660
0056B24B  51                        PUSH ECX
0056B24C  52                        PUSH EDX
0056B24D  68 A0 75 80 00            PUSH 0x8075a0
0056B252  E8 A9 85 15 00            CALL 0x006c3800
0056B257  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0056B25C  8D 95 48 FE FF FF         LEA EDX,[EBP + 0xfffffe48]
0056B262  8D 8D 44 FE FF FF         LEA ECX,[EBP + 0xfffffe44]
0056B268  6A 00                     PUSH 0x0
0056B26A  52                        PUSH EDX
0056B26B  89 85 44 FE FF FF         MOV dword ptr [EBP + 0xfffffe44],EAX
0056B271  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056B277  E8 74 25 1C 00            CALL 0x0072d7f0
0056B27C  83 C4 08                  ADD ESP,0x8
0056B27F  85 C0                     TEST EAX,EAX
0056B281  75 1E                     JNZ 0x0056b2a1
0056B283  A1 9C 75 80 00            MOV EAX,[0x0080759c]
0056B288  50                        PUSH EAX
0056B289  68 A4 75 80 00            PUSH 0x8075a4
0056B28E  E8 ED 77 15 00            CALL 0x006c2a80
0056B293  8B 8D 44 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe44]
0056B299  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056B29F  EB 0C                     JMP 0x0056b2ad
LAB_0056b2a1:
0056B2A1  8B 95 44 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe44]
0056B2A7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_0056b2ad:
0056B2AD  A1 74 75 80 00            MOV EAX,[0x00807574]
0056B2B2  8B 0D 70 75 80 00         MOV ECX,dword ptr [0x00807570]
0056B2B8  8B 15 6C 75 80 00         MOV EDX,dword ptr [0x0080756c]
0056B2BE  50                        PUSH EAX
0056B2BF  A1 68 75 80 00            MOV EAX,[0x00807568]
0056B2C4  51                        PUSH ECX
0056B2C5  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0056B2CB  52                        PUSH EDX
0056B2CC  50                        PUSH EAX
0056B2CD  6A FF                     PUSH -0x1
0056B2CF  6A 02                     PUSH 0x2
0056B2D1  51                        PUSH ECX
0056B2D2  E8 A9 66 14 00            CALL 0x006b1980
0056B2D7  8B 15 6C 75 80 00         MOV EDX,dword ptr [0x0080756c]
0056B2DD  A1 68 75 80 00            MOV EAX,[0x00807568]
0056B2E2  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0056B2E8  6A 00                     PUSH 0x0
0056B2EA  52                        PUSH EDX
0056B2EB  50                        PUSH EAX
0056B2EC  6A 02                     PUSH 0x2
0056B2EE  51                        PUSH ECX
0056B2EF  E8 CC 69 14 00            CALL 0x006b1cc0
0056B2F4  8B 15 74 75 80 00         MOV EDX,dword ptr [0x00807574]
0056B2FA  A1 70 75 80 00            MOV EAX,[0x00807570]
0056B2FF  8B 0D 6C 75 80 00         MOV ECX,dword ptr [0x0080756c]
0056B305  52                        PUSH EDX
0056B306  8B 15 68 75 80 00         MOV EDX,dword ptr [0x00807568]
0056B30C  50                        PUSH EAX
0056B30D  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0056B312  51                        PUSH ECX
0056B313  52                        PUSH EDX
0056B314  6A FF                     PUSH -0x1
0056B316  6A 03                     PUSH 0x3
0056B318  50                        PUSH EAX
0056B319  E8 62 66 14 00            CALL 0x006b1980
0056B31E  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0056B324  6A 00                     PUSH 0x0
0056B326  6A 00                     PUSH 0x0
0056B328  6A 00                     PUSH 0x0
0056B32A  6A 03                     PUSH 0x3
0056B32C  51                        PUSH ECX
0056B32D  E8 8E 69 14 00            CALL 0x006b1cc0
0056B332  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
0056B338  52                        PUSH EDX
0056B339  E8 32 1F 14 00            CALL 0x006ad270
0056B33E  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
0056B344  50                        PUSH EAX
0056B345  E8 66 33 1C 00            CALL 0x0072e6b0
0056B34A  A1 78 6D 85 00            MOV EAX,[0x00856d78]
0056B34F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0056B352  83 C4 04                  ADD ESP,0x4
0056B355  83 C1 38                  ADD ECX,0x38
0056B358  50                        PUSH EAX
0056B359  E8 8D 8A E9 FF            CALL 0x00403deb
0056B35E  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0056B364  8D 8D 14 FF FF FF         LEA ECX,[EBP + 0xffffff14]
0056B36A  8D 85 10 FF FF FF         LEA EAX,[EBP + 0xffffff10]
0056B370  6A 00                     PUSH 0x0
0056B372  51                        PUSH ECX
0056B373  89 95 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EDX
0056B379  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056B37E  E8 6D 24 1C 00            CALL 0x0072d7f0
0056B383  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0056B386  83 C4 08                  ADD ESP,0x8
0056B389  85 C0                     TEST EAX,EAX
0056B38B  0F 85 96 00 00 00         JNZ 0x0056b427
0056B391  6A 20                     PUSH 0x20
0056B393  68 64 17 81 00            PUSH 0x811764
0056B398  E8 B3 B9 14 00            CALL 0x006b6d50
0056B39D  85 C0                     TEST EAX,EAX
0056B39F  75 78                     JNZ 0x0056b419
0056B3A1  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
0056B3A7  C6 05 68 17 81 00 01      MOV byte ptr [0x00811768],0x1
0056B3AE  B9 10 00 00 00            MOV ECX,0x10
0056B3B3  8B 42 38                  MOV EAX,dword ptr [EDX + 0x38]
0056B3B6  8D 93 BD 07 00 00         LEA EDX,[EBX + 0x7bd]
0056B3BC  89 83 5F 11 00 00         MOV dword ptr [EBX + 0x115f],EAX
0056B3C2  33 C0                     XOR EAX,EAX
0056B3C4  8B FA                     MOV EDI,EDX
0056B3C6  F3 AB                     STOSD.REP ES:EDI
0056B3C8  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
0056B3CE  8B 71 34                  MOV ESI,dword ptr [ECX + 0x34]
0056B3D1  83 C9 FF                  OR ECX,0xffffffff
0056B3D4  8B FE                     MOV EDI,ESI
0056B3D6  F2 AE                     SCASB.REPNE ES:EDI
0056B3D8  F7 D1                     NOT ECX
0056B3DA  49                        DEC ECX
0056B3DB  83 F9 40                  CMP ECX,0x40
0056B3DE  72 1A                     JC 0x0056b3fa
0056B3E0  6A 3F                     PUSH 0x3f
0056B3E2  56                        PUSH ESI
0056B3E3  52                        PUSH EDX
0056B3E4  E8 57 2F 1C 00            CALL 0x0072e340
0056B3E9  8B 8D 10 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff10]
0056B3EF  83 C4 0C                  ADD ESP,0xc
0056B3F2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056B3F8  EB 39                     JMP 0x0056b433
LAB_0056b3fa:
0056B3FA  8B FE                     MOV EDI,ESI
0056B3FC  83 C9 FF                  OR ECX,0xffffffff
0056B3FF  33 C0                     XOR EAX,EAX
0056B401  F2 AE                     SCASB.REPNE ES:EDI
0056B403  F7 D1                     NOT ECX
0056B405  2B F9                     SUB EDI,ECX
0056B407  8B C1                     MOV EAX,ECX
0056B409  8B F7                     MOV ESI,EDI
0056B40B  8B FA                     MOV EDI,EDX
0056B40D  C1 E9 02                  SHR ECX,0x2
0056B410  F3 A5                     MOVSD.REP ES:EDI,ESI
0056B412  8B C8                     MOV ECX,EAX
0056B414  83 E1 03                  AND ECX,0x3
0056B417  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0056b419:
0056B419  8B 8D 10 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff10]
0056B41F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056B425  EB 0C                     JMP 0x0056b433
LAB_0056b427:
0056B427  8B 95 10 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff10]
0056B42D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_0056b433:
0056B433  8D 73 38                  LEA ESI,[EBX + 0x38]
0056B436  8B CE                     MOV ECX,ESI
0056B438  E8 76 94 E9 FF            CALL 0x004048b3
0056B43D  A0 68 17 81 00            MOV AL,[0x00811768]
0056B442  84 C0                     TEST AL,AL
0056B444  74 1A                     JZ 0x0056b460
0056B446  8A 83 26 0E 00 00         MOV AL,byte ptr [EBX + 0xe26]
0056B44C  84 C0                     TEST AL,AL
0056B44E  75 10                     JNZ 0x0056b460
0056B450  8B CE                     MOV ECX,ESI
0056B452  E8 C7 88 E9 FF            CALL 0x00403d1e
0056B457  85 C0                     TEST EAX,EAX
0056B459  75 05                     JNZ 0x0056b460
0056B45B  A2 68 17 81 00            MOV [0x00811768],AL
LAB_0056b460:
0056B460  33 C0                     XOR EAX,EAX
0056B462  A0 63 73 80 00            MOV AL,[0x00807363]
0056B467  50                        PUSH EAX
0056B468  E8 43 64 15 00            CALL 0x006c18b0
0056B46D  E8 55 8F E9 FF            CALL 0x004043c7
0056B472  6A 01                     PUSH 0x1
0056B474  6A 01                     PUSH 0x1
0056B476  6A 00                     PUSH 0x0
0056B478  E8 73 A0 14 00            CALL 0x006b54f0
0056B47D  89 83 DA 4E 00 00         MOV dword ptr [EBX + 0x4eda],EAX
0056B483  B9 08 00 00 00            MOV ECX,0x8
0056B488  33 C0                     XOR EAX,EAX
0056B48A  8D 7D D8                  LEA EDI,[EBP + -0x28]
0056B48D  F3 AB                     STOSD.REP ES:EDI
0056B48F  A0 68 17 81 00            MOV AL,[0x00811768]
0056B494  84 C0                     TEST AL,AL
0056B496  0F 85 91 0B 00 00         JNZ 0x0056c02d
0056B49C  8B 15 68 71 85 00         MOV EDX,dword ptr [0x00857168]
0056B4A2  C7 45 E8 23 61 00 00      MOV dword ptr [EBP + -0x18],0x6123
0056B4A9  32 C0                     XOR AL,AL
0056B4AB  8B 7A 04                  MOV EDI,dword ptr [EDX + 0x4]
0056B4AE  85 FF                     TEST EDI,EDI
0056B4B0  0F 84 06 0B 00 00         JZ 0x0056bfbc
0056B4B6  0F BE 77 01               MOVSX ESI,byte ptr [EDI + 0x1]
0056B4BA  83 C6 BF                  ADD ESI,-0x41
0056B4BD  83 FE 3D                  CMP ESI,0x3d
0056B4C0  0F 87 D2 0A 00 00         JA 0x0056bf98
0056B4C6  33 C9                     XOR ECX,ECX
0056B4C8  8A 8E 60 C1 56 00         MOV CL,byte ptr [ESI + 0x56c160]
switchD_0056b4ce::switchD:
0056B4CE  FF 24 8D 20 C1 56 00      JMP dword ptr [ECX*0x4 + 0x56c120]
switchD_0056b4ce::caseD_41:
0056B4D5  C7 45 E8 1F 61 00 00      MOV dword ptr [EBP + -0x18],0x611f
0056B4DC  C7 45 EC 03 00 00 00      MOV dword ptr [EBP + -0x14],0x3
0056B4E3  E9 B0 0A 00 00            JMP 0x0056bf98
switchD_0056b4ce::caseD_42:
0056B4E8  C7 45 E8 1F 61 00 00      MOV dword ptr [EBP + -0x18],0x611f
0056B4EF  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
0056B4F6  E9 9D 0A 00 00            JMP 0x0056bf98
switchD_0056b4ce::caseD_53:
0056B4FB  C7 45 E8 1F 61 00 00      MOV dword ptr [EBP + -0x18],0x611f
0056B502  C7 45 EC 02 00 00 00      MOV dword ptr [EBP + -0x14],0x2
0056B509  E9 8A 0A 00 00            JMP 0x0056bf98
switchD_0056b4ce::caseD_4c:
0056B50E  C7 45 E8 1F 61 00 00      MOV dword ptr [EBP + -0x18],0x611f
0056B515  C7 45 EC 09 00 00 00      MOV dword ptr [EBP + -0x14],0x9
0056B51C  E9 77 0A 00 00            JMP 0x0056bf98
switchD_0056b4ce::caseD_43:
0056B521  C7 45 E8 22 61 00 00      MOV dword ptr [EBP + -0x18],0x6122
0056B528  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0056B52F  E9 64 0A 00 00            JMP 0x0056bf98
switchD_0056b4ce::caseD_54:
0056B534  C7 45 E8 24 61 00 00      MOV dword ptr [EBP + -0x18],0x6124
0056B53B  E9 58 0A 00 00            JMP 0x0056bf98
switchD_0056b4ce::caseD_4e:
0056B540  C7 45 E8 05 61 00 00      MOV dword ptr [EBP + -0x18],0x6105
0056B547  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0056B54E  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
0056B555  E9 3E 0A 00 00            JMP 0x0056bf98
switchD_0056b4ce::caseD_46:
0056B55A  C7 45 E8 0A 61 00 00      MOV dword ptr [EBP + -0x18],0x610a
0056B561  E9 32 0A 00 00            JMP 0x0056bf98
switchD_0056b4ce::caseD_52:
0056B566  C7 45 E8 03 61 00 00      MOV dword ptr [EBP + -0x18],0x6103
0056B56D  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
0056B574  E9 1F 0A 00 00            JMP 0x0056bf98
switchD_0056b4ce::caseD_7e:
0056B579  8B 52 08                  MOV EDX,dword ptr [EDX + 0x8]
0056B57C  85 D2                     TEST EDX,EDX
0056B57E  0F 84 14 0A 00 00         JZ 0x0056bf98
0056B584  52                        PUSH EDX
0056B585  8D 53 60                  LEA EDX,[EBX + 0x60]
0056B588  52                        PUSH EDX
0056B589  81 C3 F6 76 00 00         ADD EBX,0x76f6
0056B58F  68 E4 6E 7C 00            PUSH 0x7c6ee4
0056B594  53                        PUSH EBX
0056B595  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0056B59B  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0056B5A0  8D 95 8C FE FF FF         LEA EDX,[EBP + 0xfffffe8c]
0056B5A6  8D 8D 88 FE FF FF         LEA ECX,[EBP + 0xfffffe88]
0056B5AC  6A 00                     PUSH 0x0
0056B5AE  52                        PUSH EDX
0056B5AF  89 85 88 FE FF FF         MOV dword ptr [EBP + 0xfffffe88],EAX
0056B5B5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056B5BB  E8 30 22 1C 00            CALL 0x0072d7f0
0056B5C0  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0056B5C3  83 C4 18                  ADD ESP,0x18
0056B5C6  85 C0                     TEST EAX,EAX
0056B5C8  75 77                     JNZ 0x0056b641
0056B5CA  6A 00                     PUSH 0x0
0056B5CC  6A 00                     PUSH 0x0
0056B5CE  8D 83 F6 76 00 00         LEA EAX,[EBX + 0x76f6]
0056B5D4  6A 02                     PUSH 0x2
0056B5D6  50                        PUSH EAX
0056B5D7  68 45 03 00 00            PUSH 0x345
0056B5DC  E8 DF 58 18 00            CALL 0x006f0ec0
0056B5E1  8B 15 80 B0 79 00         MOV EDX,dword ptr [0x0079b080]
0056B5E7  83 C4 14                  ADD ESP,0x14
0056B5EA  8D 4D FC                  LEA ECX,[EBP + -0x4]
0056B5ED  8B F0                     MOV ESI,EAX
0056B5EF  6A 00                     PUSH 0x0
0056B5F1  51                        PUSH ECX
0056B5F2  8D BB 96 11 00 00         LEA EDI,[EBX + 0x1196]
0056B5F8  52                        PUSH EDX
0056B5F9  6A 00                     PUSH 0x0
0056B5FB  8B CE                     MOV ECX,ESI
0056B5FD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0056B600  E8 DB 66 18 00            CALL 0x006f1ce0
0056B605  6A 00                     PUSH 0x0
0056B607  6A 00                     PUSH 0x0
0056B609  C7 83 9A 11 00 00 05 08 00 8F  MOV dword ptr [EBX + 0x119a],0x8f000805
0056B613  A1 80 B0 79 00            MOV EAX,[0x0079b080]
0056B618  6A 00                     PUSH 0x0
0056B61A  68 99 19 00 00            PUSH 0x1999
0056B61F  57                        PUSH EDI
0056B620  50                        PUSH EAX
0056B621  6A 00                     PUSH 0x0
0056B623  8B CE                     MOV ECX,ESI
0056B625  E8 C6 5D 18 00            CALL 0x006f13f0
0056B62A  56                        PUSH ESI
0056B62B  E8 40 5B 18 00            CALL 0x006f1170
0056B630  8B 8D 88 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe88]
0056B636  83 C4 04                  ADD ESP,0x4
0056B639  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056B63F  EB 0C                     JMP 0x0056b64d
LAB_0056b641:
0056B641  8B 95 88 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe88]
0056B647  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_0056b64d:
0056B64D  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0056B652  68 E5 01 00 00            PUSH 0x1e5
0056B657  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056B65C  50                        PUSH EAX
0056B65D  68 0C 00 FE AF            PUSH 0xaffe000c
0056B662  E8 D9 A7 13 00            CALL 0x006a5e40
0056B667  E9 2C 09 00 00            JMP 0x0056bf98
switchD_0056b4ce::caseD_44:
0056B66C  8B 7A 08                  MOV EDI,dword ptr [EDX + 0x8]
0056B66F  85 FF                     TEST EDI,EDI
0056B671  0F 84 21 09 00 00         JZ 0x0056bf98
0056B677  83 C9 FF                  OR ECX,0xffffffff
0056B67A  33 C0                     XOR EAX,EAX
0056B67C  F2 AE                     SCASB.REPNE ES:EDI
0056B67E  F7 D1                     NOT ECX
0056B680  2B F9                     SUB EDI,ECX
0056B682  8D 93 06 7B 00 00         LEA EDX,[EBX + 0x7b06]
0056B688  8B C1                     MOV EAX,ECX
0056B68A  8B F7                     MOV ESI,EDI
0056B68C  8B FA                     MOV EDI,EDX
0056B68E  52                        PUSH EDX
0056B68F  C1 E9 02                  SHR ECX,0x2
0056B692  F3 A5                     MOVSD.REP ES:EDI,ESI
0056B694  8B C8                     MOV ECX,EAX
0056B696  52                        PUSH EDX
0056B697  83 E1 03                  AND ECX,0x3
0056B69A  F3 A4                     MOVSB.REP ES:EDI,ESI
0056B69C  E8 0F AA 14 00            CALL 0x006b60b0
0056B6A1  8D BB 06 7B 00 00         LEA EDI,[EBX + 0x7b06]
0056B6A7  57                        PUSH EDI
0056B6A8  57                        PUSH EDI
0056B6A9  E8 D2 72 15 00            CALL 0x006c2980
0056B6AE  83 C9 FF                  OR ECX,0xffffffff
0056B6B1  33 C0                     XOR EAX,EAX
0056B6B3  F2 AE                     SCASB.REPNE ES:EDI
0056B6B5  F7 D1                     NOT ECX
0056B6B7  49                        DEC ECX
0056B6B8  0F 84 DA 08 00 00         JZ 0x0056bf98
0056B6BE  83 C9 FF                  OR ECX,0xffffffff
0056B6C1  8D 7B 60                  LEA EDI,[EBX + 0x60]
0056B6C4  F2 AE                     SCASB.REPNE ES:EDI
0056B6C6  F7 D1                     NOT ECX
0056B6C8  2B F9                     SUB EDI,ECX
0056B6CA  8D 93 F6 76 00 00         LEA EDX,[EBX + 0x76f6]
0056B6D0  8B C1                     MOV EAX,ECX
0056B6D2  8B F7                     MOV ESI,EDI
0056B6D4  8B FA                     MOV EDI,EDX
0056B6D6  C1 E9 02                  SHR ECX,0x2
0056B6D9  F3 A5                     MOVSD.REP ES:EDI,ESI
0056B6DB  8B C8                     MOV ECX,EAX
0056B6DD  33 C0                     XOR EAX,EAX
0056B6DF  83 E1 03                  AND ECX,0x3
0056B6E2  F3 A4                     MOVSB.REP ES:EDI,ESI
0056B6E4  8B 3D 2C B0 79 00         MOV EDI,dword ptr [0x0079b02c]
0056B6EA  83 C9 FF                  OR ECX,0xffffffff
0056B6ED  F2 AE                     SCASB.REPNE ES:EDI
0056B6EF  F7 D1                     NOT ECX
0056B6F1  2B F9                     SUB EDI,ECX
0056B6F3  8B C1                     MOV EAX,ECX
0056B6F5  8B F7                     MOV ESI,EDI
0056B6F7  8B FA                     MOV EDI,EDX
0056B6F9  8B D0                     MOV EDX,EAX
0056B6FB  83 C9 FF                  OR ECX,0xffffffff
0056B6FE  33 C0                     XOR EAX,EAX
0056B700  F2 AE                     SCASB.REPNE ES:EDI
0056B702  8B CA                     MOV ECX,EDX
0056B704  4F                        DEC EDI
0056B705  C1 E9 02                  SHR ECX,0x2
0056B708  F3 A5                     MOVSD.REP ES:EDI,ESI
0056B70A  8B CA                     MOV ECX,EDX
0056B70C  83 E1 03                  AND ECX,0x3
0056B70F  F3 A4                     MOVSB.REP ES:EDI,ESI
0056B711  8D BB BD 07 00 00         LEA EDI,[EBX + 0x7bd]
0056B717  83 C9 FF                  OR ECX,0xffffffff
0056B71A  F2 AE                     SCASB.REPNE ES:EDI
0056B71C  F7 D1                     NOT ECX
0056B71E  2B F9                     SUB EDI,ECX
0056B720  8B F7                     MOV ESI,EDI
0056B722  8B D1                     MOV EDX,ECX
0056B724  8D BB F6 76 00 00         LEA EDI,[EBX + 0x76f6]
0056B72A  83 C9 FF                  OR ECX,0xffffffff
0056B72D  F2 AE                     SCASB.REPNE ES:EDI
0056B72F  8B CA                     MOV ECX,EDX
0056B731  4F                        DEC EDI
0056B732  C1 E9 02                  SHR ECX,0x2
0056B735  F3 A5                     MOVSD.REP ES:EDI,ESI
0056B737  8B CA                     MOV ECX,EDX
0056B739  8D 83 F6 76 00 00         LEA EAX,[EBX + 0x76f6]
0056B73F  83 E1 03                  AND ECX,0x3
0056B742  50                        PUSH EAX
0056B743  F3 A4                     MOVSB.REP ES:EDI,ESI
0056B745  50                        PUSH EAX
0056B746  E8 35 CB 14 00            CALL 0x006b8280
0056B74B  8B 3D 50 B0 79 00         MOV EDI,dword ptr [0x0079b050]
0056B751  83 C9 FF                  OR ECX,0xffffffff
0056B754  33 C0                     XOR EAX,EAX
0056B756  F2 AE                     SCASB.REPNE ES:EDI
0056B758  F7 D1                     NOT ECX
0056B75A  2B F9                     SUB EDI,ECX
0056B75C  8B F7                     MOV ESI,EDI
0056B75E  8B D1                     MOV EDX,ECX
0056B760  8D BB F6 76 00 00         LEA EDI,[EBX + 0x76f6]
0056B766  83 C9 FF                  OR ECX,0xffffffff
0056B769  F2 AE                     SCASB.REPNE ES:EDI
0056B76B  8B CA                     MOV ECX,EDX
0056B76D  4F                        DEC EDI
0056B76E  C1 E9 02                  SHR ECX,0x2
0056B771  F3 A5                     MOVSD.REP ES:EDI,ESI
0056B773  8B CA                     MOV ECX,EDX
0056B775  83 E1 03                  AND ECX,0x3
0056B778  F3 A4                     MOVSB.REP ES:EDI,ESI
0056B77A  8D BB 06 7B 00 00         LEA EDI,[EBX + 0x7b06]
0056B780  83 C9 FF                  OR ECX,0xffffffff
0056B783  F2 AE                     SCASB.REPNE ES:EDI
0056B785  F7 D1                     NOT ECX
0056B787  2B F9                     SUB EDI,ECX
0056B789  8B F7                     MOV ESI,EDI
0056B78B  8B D1                     MOV EDX,ECX
0056B78D  83 C9 FF                  OR ECX,0xffffffff
0056B790  8D BB F6 76 00 00         LEA EDI,[EBX + 0x76f6]
0056B796  F2 AE                     SCASB.REPNE ES:EDI
0056B798  8B CA                     MOV ECX,EDX
0056B79A  4F                        DEC EDI
0056B79B  C1 E9 02                  SHR ECX,0x2
0056B79E  F3 A5                     MOVSD.REP ES:EDI,ESI
0056B7A0  8B CA                     MOV ECX,EDX
0056B7A2  8D 93 06 7B 00 00         LEA EDX,[EBX + 0x7b06]
0056B7A8  83 E1 03                  AND ECX,0x3
0056B7AB  6A 01                     PUSH 0x1
0056B7AD  F3 A4                     MOVSB.REP ES:EDI,ESI
0056B7AF  8D BB F6 76 00 00         LEA EDI,[EBX + 0x76f6]
0056B7B5  83 C9 FF                  OR ECX,0xffffffff
0056B7B8  F2 AE                     SCASB.REPNE ES:EDI
0056B7BA  F7 D1                     NOT ECX
0056B7BC  2B F9                     SUB EDI,ECX
0056B7BE  8B C1                     MOV EAX,ECX
0056B7C0  8B F7                     MOV ESI,EDI
0056B7C2  8B FA                     MOV EDI,EDX
0056B7C4  C1 E9 02                  SHR ECX,0x2
0056B7C7  F3 A5                     MOVSD.REP ES:EDI,ESI
0056B7C9  8B C8                     MOV ECX,EAX
0056B7CB  33 C0                     XOR EAX,EAX
0056B7CD  83 E1 03                  AND ECX,0x3
0056B7D0  F3 A4                     MOVSB.REP ES:EDI,ESI
0056B7D2  BF B8 A0 7C 00            MOV EDI,0x7ca0b8
0056B7D7  83 C9 FF                  OR ECX,0xffffffff
0056B7DA  F2 AE                     SCASB.REPNE ES:EDI
0056B7DC  F7 D1                     NOT ECX
0056B7DE  2B F9                     SUB EDI,ECX
0056B7E0  8B C1                     MOV EAX,ECX
0056B7E2  8B F7                     MOV ESI,EDI
0056B7E4  8B FA                     MOV EDI,EDX
0056B7E6  8B D0                     MOV EDX,EAX
0056B7E8  83 C9 FF                  OR ECX,0xffffffff
0056B7EB  33 C0                     XOR EAX,EAX
0056B7ED  F2 AE                     SCASB.REPNE ES:EDI
0056B7EF  8B CA                     MOV ECX,EDX
0056B7F1  4F                        DEC EDI
0056B7F2  C1 E9 02                  SHR ECX,0x2
0056B7F5  F3 A5                     MOVSD.REP ES:EDI,ESI
0056B7F7  8B CA                     MOV ECX,EDX
0056B7F9  83 E1 03                  AND ECX,0x3
0056B7FC  F3 A4                     MOVSB.REP ES:EDI,ESI
0056B7FE  8B CB                     MOV ECX,EBX
0056B800  C7 83 85 11 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1185],0x1
0056B80A  E8 93 92 E9 FF            CALL 0x00404aa2
0056B80F  8B 83 85 11 00 00         MOV EAX,dword ptr [EBX + 0x1185]
0056B815  85 C0                     TEST EAX,EAX
0056B817  0F 84 7B 07 00 00         JZ 0x0056bf98
0056B81D  8B 15 68 71 85 00         MOV EDX,dword ptr [0x00857168]
0056B823  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0056B826  80 78 01 64               CMP byte ptr [EAX + 0x1],0x64
0056B82A  0F 85 59 01 00 00         JNZ 0x0056b989
0056B830  8B 3D 2C B0 79 00         MOV EDI,dword ptr [0x0079b02c]
0056B836  83 C9 FF                  OR ECX,0xffffffff
0056B839  33 C0                     XOR EAX,EAX
0056B83B  8D 93 FE 78 00 00         LEA EDX,[EBX + 0x78fe]
0056B841  F2 AE                     SCASB.REPNE ES:EDI
0056B843  F7 D1                     NOT ECX
0056B845  2B F9                     SUB EDI,ECX
0056B847  8B C1                     MOV EAX,ECX
0056B849  8B F7                     MOV ESI,EDI
0056B84B  8B FA                     MOV EDI,EDX
0056B84D  C1 E9 02                  SHR ECX,0x2
0056B850  F3 A5                     MOVSD.REP ES:EDI,ESI
0056B852  8B C8                     MOV ECX,EAX
0056B854  33 C0                     XOR EAX,EAX
0056B856  83 E1 03                  AND ECX,0x3
0056B859  F3 A4                     MOVSB.REP ES:EDI,ESI
0056B85B  8D BB BD 07 00 00         LEA EDI,[EBX + 0x7bd]
0056B861  83 C9 FF                  OR ECX,0xffffffff
0056B864  F2 AE                     SCASB.REPNE ES:EDI
0056B866  F7 D1                     NOT ECX
0056B868  2B F9                     SUB EDI,ECX
0056B86A  8B C1                     MOV EAX,ECX
0056B86C  8B F7                     MOV ESI,EDI
0056B86E  8B FA                     MOV EDI,EDX
0056B870  8B D0                     MOV EDX,EAX
0056B872  83 C9 FF                  OR ECX,0xffffffff
0056B875  33 C0                     XOR EAX,EAX
0056B877  F2 AE                     SCASB.REPNE ES:EDI
0056B879  8B CA                     MOV ECX,EDX
0056B87B  4F                        DEC EDI
0056B87C  C1 E9 02                  SHR ECX,0x2
0056B87F  F3 A5                     MOVSD.REP ES:EDI,ESI
0056B881  8B CA                     MOV ECX,EDX
0056B883  8D 83 FE 78 00 00         LEA EAX,[EBX + 0x78fe]
0056B889  83 E1 03                  AND ECX,0x3
0056B88C  50                        PUSH EAX
0056B88D  F3 A4                     MOVSB.REP ES:EDI,ESI
0056B88F  50                        PUSH EAX
0056B890  E8 EB C9 14 00            CALL 0x006b8280
0056B895  8B 3D 50 B0 79 00         MOV EDI,dword ptr [0x0079b050]
0056B89B  83 C9 FF                  OR ECX,0xffffffff
0056B89E  33 C0                     XOR EAX,EAX
0056B8A0  68 B6 06 00 00            PUSH 0x6b6
0056B8A5  F2 AE                     SCASB.REPNE ES:EDI
0056B8A7  F7 D1                     NOT ECX
0056B8A9  2B F9                     SUB EDI,ECX
0056B8AB  8B F7                     MOV ESI,EDI
0056B8AD  8B D1                     MOV EDX,ECX
0056B8AF  8D BB FE 78 00 00         LEA EDI,[EBX + 0x78fe]
0056B8B5  83 C9 FF                  OR ECX,0xffffffff
0056B8B8  F2 AE                     SCASB.REPNE ES:EDI
0056B8BA  8B CA                     MOV ECX,EDX
0056B8BC  4F                        DEC EDI
0056B8BD  C1 E9 02                  SHR ECX,0x2
0056B8C0  F3 A5                     MOVSD.REP ES:EDI,ESI
0056B8C2  8B CA                     MOV ECX,EDX
0056B8C4  83 E1 03                  AND ECX,0x3
0056B8C7  F3 A4                     MOVSB.REP ES:EDI,ESI
0056B8C9  8D BB 06 7B 00 00         LEA EDI,[EBX + 0x7b06]
0056B8CF  83 C9 FF                  OR ECX,0xffffffff
0056B8D2  F2 AE                     SCASB.REPNE ES:EDI
0056B8D4  F7 D1                     NOT ECX
0056B8D6  2B F9                     SUB EDI,ECX
0056B8D8  8B F7                     MOV ESI,EDI
0056B8DA  8B D1                     MOV EDX,ECX
0056B8DC  8D BB FE 78 00 00         LEA EDI,[EBX + 0x78fe]
0056B8E2  83 C9 FF                  OR ECX,0xffffffff
0056B8E5  F2 AE                     SCASB.REPNE ES:EDI
0056B8E7  8B CA                     MOV ECX,EDX
0056B8E9  4F                        DEC EDI
0056B8EA  C1 E9 02                  SHR ECX,0x2
0056B8ED  F3 A5                     MOVSD.REP ES:EDI,ESI
0056B8EF  8B CA                     MOV ECX,EDX
0056B8F1  83 E1 03                  AND ECX,0x3
0056B8F4  F3 A4                     MOVSB.REP ES:EDI,ESI
0056B8F6  E8 35 2C 1C 00            CALL 0x0072e530
0056B8FB  83 C4 04                  ADD ESP,0x4
0056B8FE  85 C0                     TEST EAX,EAX
0056B900  74 08                     JZ 0x0056b90a
0056B902  53                        PUSH EBX
0056B903  8B C8                     MOV ECX,EAX
0056B905  E8 CC A3 E9 FF            CALL 0x00405cd6
LAB_0056b90a:
0056B90A  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
0056B910  8B 01                     MOV EAX,dword ptr [ECX]
0056B912  FF 10                     CALL dword ptr [EAX]
0056B914  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
0056B91A  6A 00                     PUSH 0x0
0056B91C  51                        PUSH ECX
0056B91D  8B CB                     MOV ECX,EBX
0056B91F  E8 2C 8D 17 00            CALL 0x006e4650
0056B924  B8 01 00 00 00            MOV EAX,0x1
0056B929  C7 45 E8 FF 60 00 00      MOV dword ptr [EBP + -0x18],0x60ff
0056B930  89 83 0E 7D 00 00         MOV dword ptr [EBX + 0x7d0e],EAX
0056B936  89 83 7C 11 00 00         MOV dword ptr [EBX + 0x117c],EAX
0056B93C  88 83 63 11 00 00         MOV byte ptr [EBX + 0x1163],AL
0056B942  8B 15 68 71 85 00         MOV EDX,dword ptr [0x00857168]
0056B948  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0056B94B  85 C0                     TEST EAX,EAX
0056B94D  0F 84 45 06 00 00         JZ 0x0056bf98
0056B953  0F BE 00                  MOVSX EAX,byte ptr [EAX]
0056B956  83 C0 B3                  ADD EAX,-0x4d
0056B959  83 F8 26                  CMP EAX,0x26
0056B95C  0F 87 36 06 00 00         JA 0x0056bf98
0056B962  33 C9                     XOR ECX,ECX
0056B964  8A 88 AC C1 56 00         MOV CL,byte ptr [EAX + 0x56c1ac]
switchD_0056b96a::switchD:
0056B96A  FF 24 8D A0 C1 56 00      JMP dword ptr [ECX*0x4 + 0x56c1a0]
switchD_0056b96a::caseD_4d:
0056B971  C6 83 63 11 00 00 03      MOV byte ptr [EBX + 0x1163],0x3
0056B978  E9 1B 06 00 00            JMP 0x0056bf98
switchD_0056b96a::caseD_53:
0056B97D  C6 83 63 11 00 00 02      MOV byte ptr [EBX + 0x1163],0x2
0056B984  E9 0F 06 00 00            JMP 0x0056bf98
LAB_0056b989:
0056B989  B0 01                     MOV AL,0x1
switchD_0056b4ce::caseD_57:
0056B98B  84 C0                     TEST AL,AL
0056B98D  0F 85 FB 01 00 00         JNZ 0x0056bb8e
0056B993  8B 7A 08                  MOV EDI,dword ptr [EDX + 0x8]
0056B996  85 FF                     TEST EDI,EDI
0056B998  0F 84 FA 05 00 00         JZ 0x0056bf98
0056B99E  83 C9 FF                  OR ECX,0xffffffff
0056B9A1  33 C0                     XOR EAX,EAX
0056B9A3  F2 AE                     SCASB.REPNE ES:EDI
0056B9A5  F7 D1                     NOT ECX
0056B9A7  2B F9                     SUB EDI,ECX
0056B9A9  8D 93 06 7B 00 00         LEA EDX,[EBX + 0x7b06]
0056B9AF  8B C1                     MOV EAX,ECX
0056B9B1  8B F7                     MOV ESI,EDI
0056B9B3  8B FA                     MOV EDI,EDX
0056B9B5  52                        PUSH EDX
0056B9B6  C1 E9 02                  SHR ECX,0x2
0056B9B9  F3 A5                     MOVSD.REP ES:EDI,ESI
0056B9BB  8B C8                     MOV ECX,EAX
0056B9BD  52                        PUSH EDX
0056B9BE  83 E1 03                  AND ECX,0x3
0056B9C1  F3 A4                     MOVSB.REP ES:EDI,ESI
0056B9C3  E8 E8 A6 14 00            CALL 0x006b60b0
0056B9C8  8D BB 06 7B 00 00         LEA EDI,[EBX + 0x7b06]
0056B9CE  57                        PUSH EDI
0056B9CF  57                        PUSH EDI
0056B9D0  E8 AB 6F 15 00            CALL 0x006c2980
0056B9D5  83 C9 FF                  OR ECX,0xffffffff
0056B9D8  33 C0                     XOR EAX,EAX
0056B9DA  F2 AE                     SCASB.REPNE ES:EDI
0056B9DC  F7 D1                     NOT ECX
0056B9DE  49                        DEC ECX
0056B9DF  0F 84 B3 05 00 00         JZ 0x0056bf98
0056B9E5  83 C9 FF                  OR ECX,0xffffffff
0056B9E8  8D 7B 60                  LEA EDI,[EBX + 0x60]
0056B9EB  F2 AE                     SCASB.REPNE ES:EDI
0056B9ED  F7 D1                     NOT ECX
0056B9EF  2B F9                     SUB EDI,ECX
0056B9F1  8D 93 F6 76 00 00         LEA EDX,[EBX + 0x76f6]
0056B9F7  8B C1                     MOV EAX,ECX
0056B9F9  8B F7                     MOV ESI,EDI
0056B9FB  8B FA                     MOV EDI,EDX
0056B9FD  C1 E9 02                  SHR ECX,0x2
0056BA00  F3 A5                     MOVSD.REP ES:EDI,ESI
0056BA02  8B C8                     MOV ECX,EAX
0056BA04  33 C0                     XOR EAX,EAX
0056BA06  83 E1 03                  AND ECX,0x3
0056BA09  F3 A4                     MOVSB.REP ES:EDI,ESI
0056BA0B  8B 3D 2C B0 79 00         MOV EDI,dword ptr [0x0079b02c]
0056BA11  83 C9 FF                  OR ECX,0xffffffff
0056BA14  F2 AE                     SCASB.REPNE ES:EDI
0056BA16  F7 D1                     NOT ECX
0056BA18  2B F9                     SUB EDI,ECX
0056BA1A  8B C1                     MOV EAX,ECX
0056BA1C  8B F7                     MOV ESI,EDI
0056BA1E  8B FA                     MOV EDI,EDX
0056BA20  8B D0                     MOV EDX,EAX
0056BA22  83 C9 FF                  OR ECX,0xffffffff
0056BA25  33 C0                     XOR EAX,EAX
0056BA27  F2 AE                     SCASB.REPNE ES:EDI
0056BA29  8B CA                     MOV ECX,EDX
0056BA2B  4F                        DEC EDI
0056BA2C  C1 E9 02                  SHR ECX,0x2
0056BA2F  F3 A5                     MOVSD.REP ES:EDI,ESI
0056BA31  8B CA                     MOV ECX,EDX
0056BA33  83 E1 03                  AND ECX,0x3
0056BA36  F3 A4                     MOVSB.REP ES:EDI,ESI
0056BA38  8D BB BD 07 00 00         LEA EDI,[EBX + 0x7bd]
0056BA3E  83 C9 FF                  OR ECX,0xffffffff
0056BA41  F2 AE                     SCASB.REPNE ES:EDI
0056BA43  F7 D1                     NOT ECX
0056BA45  2B F9                     SUB EDI,ECX
0056BA47  8B F7                     MOV ESI,EDI
0056BA49  8B D1                     MOV EDX,ECX
0056BA4B  8D BB F6 76 00 00         LEA EDI,[EBX + 0x76f6]
0056BA51  83 C9 FF                  OR ECX,0xffffffff
0056BA54  F2 AE                     SCASB.REPNE ES:EDI
0056BA56  8B CA                     MOV ECX,EDX
0056BA58  4F                        DEC EDI
0056BA59  C1 E9 02                  SHR ECX,0x2
0056BA5C  F3 A5                     MOVSD.REP ES:EDI,ESI
0056BA5E  8B CA                     MOV ECX,EDX
0056BA60  8D 83 F6 76 00 00         LEA EAX,[EBX + 0x76f6]
0056BA66  83 E1 03                  AND ECX,0x3
0056BA69  50                        PUSH EAX
0056BA6A  F3 A4                     MOVSB.REP ES:EDI,ESI
0056BA6C  50                        PUSH EAX
0056BA6D  E8 0E C8 14 00            CALL 0x006b8280
0056BA72  8B 3D 50 B0 79 00         MOV EDI,dword ptr [0x0079b050]
0056BA78  83 C9 FF                  OR ECX,0xffffffff
0056BA7B  33 C0                     XOR EAX,EAX
0056BA7D  F2 AE                     SCASB.REPNE ES:EDI
0056BA7F  F7 D1                     NOT ECX
0056BA81  2B F9                     SUB EDI,ECX
0056BA83  8B F7                     MOV ESI,EDI
0056BA85  8B D1                     MOV EDX,ECX
0056BA87  8D BB F6 76 00 00         LEA EDI,[EBX + 0x76f6]
0056BA8D  83 C9 FF                  OR ECX,0xffffffff
0056BA90  F2 AE                     SCASB.REPNE ES:EDI
0056BA92  8B CA                     MOV ECX,EDX
0056BA94  4F                        DEC EDI
0056BA95  C1 E9 02                  SHR ECX,0x2
0056BA98  F3 A5                     MOVSD.REP ES:EDI,ESI
0056BA9A  8B CA                     MOV ECX,EDX
0056BA9C  83 E1 03                  AND ECX,0x3
0056BA9F  F3 A4                     MOVSB.REP ES:EDI,ESI
0056BAA1  8D BB 06 7B 00 00         LEA EDI,[EBX + 0x7b06]
0056BAA7  83 C9 FF                  OR ECX,0xffffffff
0056BAAA  F2 AE                     SCASB.REPNE ES:EDI
0056BAAC  F7 D1                     NOT ECX
0056BAAE  2B F9                     SUB EDI,ECX
0056BAB0  8B F7                     MOV ESI,EDI
0056BAB2  8B D1                     MOV EDX,ECX
0056BAB4  83 C9 FF                  OR ECX,0xffffffff
0056BAB7  8D BB F6 76 00 00         LEA EDI,[EBX + 0x76f6]
0056BABD  F2 AE                     SCASB.REPNE ES:EDI
0056BABF  8B CA                     MOV ECX,EDX
0056BAC1  4F                        DEC EDI
0056BAC2  C1 E9 02                  SHR ECX,0x2
0056BAC5  F3 A5                     MOVSD.REP ES:EDI,ESI
0056BAC7  8B CA                     MOV ECX,EDX
0056BAC9  8D 93 06 7B 00 00         LEA EDX,[EBX + 0x7b06]
0056BACF  83 E1 03                  AND ECX,0x3
0056BAD2  F3 A4                     MOVSB.REP ES:EDI,ESI
0056BAD4  8D BB F6 76 00 00         LEA EDI,[EBX + 0x76f6]
0056BADA  83 C9 FF                  OR ECX,0xffffffff
0056BADD  F2 AE                     SCASB.REPNE ES:EDI
0056BADF  F7 D1                     NOT ECX
0056BAE1  2B F9                     SUB EDI,ECX
0056BAE3  8B C1                     MOV EAX,ECX
0056BAE5  8B F7                     MOV ESI,EDI
0056BAE7  8B FA                     MOV EDI,EDX
0056BAE9  C1 E9 02                  SHR ECX,0x2
0056BAEC  F3 A5                     MOVSD.REP ES:EDI,ESI
0056BAEE  8B C8                     MOV ECX,EAX
0056BAF0  33 C0                     XOR EAX,EAX
0056BAF2  83 E1 03                  AND ECX,0x3
0056BAF5  F3 A4                     MOVSB.REP ES:EDI,ESI
0056BAF7  BF B8 A0 7C 00            MOV EDI,0x7ca0b8
0056BAFC  83 C9 FF                  OR ECX,0xffffffff
0056BAFF  F2 AE                     SCASB.REPNE ES:EDI
0056BB01  F7 D1                     NOT ECX
0056BB03  2B F9                     SUB EDI,ECX
0056BB05  8B C1                     MOV EAX,ECX
0056BB07  8B F7                     MOV ESI,EDI
0056BB09  8B FA                     MOV EDI,EDX
0056BB0B  8B D0                     MOV EDX,EAX
0056BB0D  83 C9 FF                  OR ECX,0xffffffff
0056BB10  33 C0                     XOR EAX,EAX
0056BB12  F2 AE                     SCASB.REPNE ES:EDI
0056BB14  8B CA                     MOV ECX,EDX
0056BB16  4F                        DEC EDI
0056BB17  C1 E9 02                  SHR ECX,0x2
0056BB1A  F3 A5                     MOVSD.REP ES:EDI,ESI
0056BB1C  50                        PUSH EAX
0056BB1D  68 80 00 00 00            PUSH 0x80
0056BB22  8B CA                     MOV ECX,EDX
0056BB24  6A 02                     PUSH 0x2
0056BB26  50                        PUSH EAX
0056BB27  83 E1 03                  AND ECX,0x3
0056BB2A  6A 01                     PUSH 0x1
0056BB2C  8D 83 06 7B 00 00         LEA EAX,[EBX + 0x7b06]
0056BB32  68 00 00 00 40            PUSH 0x40000000
0056BB37  50                        PUSH EAX
0056BB38  F3 A4                     MOVSB.REP ES:EDI,ESI
0056BB3A  FF 15 80 BC 85 00         CALL dword ptr [0x0085bc80]
0056BB40  8B F0                     MOV ESI,EAX
0056BB42  83 FE FF                  CMP ESI,-0x1
0056BB45  0F 84 4D 04 00 00         JZ 0x0056bf98
0056BB4B  6A 02                     PUSH 0x2
0056BB4D  6A 00                     PUSH 0x0
0056BB4F  6A 00                     PUSH 0x0
0056BB51  56                        PUSH ESI
0056BB52  FF 15 74 BC 85 00         CALL dword ptr [0x0085bc74]
0056BB58  83 F8 FF                  CMP EAX,-0x1
0056BB5B  0F 84 37 04 00 00         JZ 0x0056bf98
0056BB61  8D 45 C0                  LEA EAX,[EBP + -0x40]
0056BB64  6A 00                     PUSH 0x0
0056BB66  50                        PUSH EAX
0056BB67  8D 8B 34 11 00 00         LEA ECX,[EBX + 0x1134]
0056BB6D  6A 04                     PUSH 0x4
0056BB6F  51                        PUSH ECX
0056BB70  56                        PUSH ESI
0056BB71  FF 15 90 BC 85 00         CALL dword ptr [0x0085bc90]
0056BB77  56                        PUSH ESI
0056BB78  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
0056BB7E  C7 83 81 11 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1181],0x1
0056BB88  8B 15 68 71 85 00         MOV EDX,dword ptr [0x00857168]
switchD_0056b4ce::caseD_47:
0056BB8E  8B 52 04                  MOV EDX,dword ptr [EDX + 0x4]
0056BB91  83 C9 FF                  OR ECX,0xffffffff
0056BB94  8B FA                     MOV EDI,EDX
0056BB96  33 C0                     XOR EAX,EAX
0056BB98  F2 AE                     SCASB.REPNE ES:EDI
0056BB9A  F7 D1                     NOT ECX
0056BB9C  49                        DEC ECX
0056BB9D  83 F9 07                  CMP ECX,0x7
0056BBA0  0F 82 F2 03 00 00         JC 0x0056bf98
0056BBA6  6A 06                     PUSH 0x6
0056BBA8  52                        PUSH EDX
0056BBA9  8D B3 FE 78 00 00         LEA ESI,[EBX + 0x78fe]
0056BBAF  E8 8C C6 14 00            CALL 0x006b8240
0056BBB4  8B 3D E8 BD 85 00         MOV EDI,dword ptr [0x0085bde8]
0056BBBA  50                        PUSH EAX
0056BBBB  68 CC 4C 7A 00            PUSH 0x7a4ccc
0056BBC0  56                        PUSH ESI
0056BBC1  FF D7                     CALL EDI
0056BBC3  8D 53 60                  LEA EDX,[EBX + 0x60]
0056BBC6  56                        PUSH ESI
0056BBC7  52                        PUSH EDX
0056BBC8  8D 83 F6 76 00 00         LEA EAX,[EBX + 0x76f6]
0056BBCE  68 E4 6E 7C 00            PUSH 0x7c6ee4
0056BBD3  50                        PUSH EAX
0056BBD4  FF D7                     CALL EDI
0056BBD6  C6 83 95 11 00 00 01      MOV byte ptr [EBX + 0x1195],0x1
0056BBDD  8B 0D 68 71 85 00         MOV ECX,dword ptr [0x00857168]
0056BBE3  83 C4 1C                  ADD ESP,0x1c
0056BBE6  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0056BBE9  8A 42 03                  MOV AL,byte ptr [EDX + 0x3]
0056BBEC  2C 30                     SUB AL,0x30
0056BBEE  3C 03                     CMP AL,0x3
0056BBF0  A2 40 73 80 00            MOV [0x00807340],AL
0056BBF5  76 07                     JBE 0x0056bbfe
0056BBF7  C6 05 40 73 80 00 03      MOV byte ptr [0x00807340],0x3
LAB_0056bbfe:
0056BBFE  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0056BC01  6A 01                     PUSH 0x1
0056BC03  0F BE 48 05               MOVSX ECX,byte ptr [EAX + 0x5]
0056BC07  83 E9 30                  SUB ECX,0x30
0056BC0A  89 8B 52 85 00 00         MOV dword ptr [EBX + 0x8552],ECX
0056BC10  8B 15 68 71 85 00         MOV EDX,dword ptr [0x00857168]
0056BC16  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0056BC19  8A 48 04                  MOV CL,byte ptr [EAX + 0x4]
0056BC1C  C6 83 80 11 00 00 08      MOV byte ptr [EBX + 0x1180],0x8
0056BC23  80 E9 30                  SUB CL,0x30
0056BC26  88 8B 2D 11 00 00         MOV byte ptr [EBX + 0x112d],CL
0056BC2C  8B CB                     MOV ECX,EBX
0056BC2E  E8 19 8F E9 FF            CALL 0x00404b4c
0056BC33  85 C0                     TEST EAX,EAX
0056BC35  0F 84 B8 01 00 00         JZ 0x0056bdf3
0056BC3B  8B 15 68 71 85 00         MOV EDX,dword ptr [0x00857168]
0056BC41  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0056BC44  0F BE 40 02               MOVSX EAX,byte ptr [EAX + 0x2]
0056BC48  83 C0 BF                  ADD EAX,-0x41
0056BC4B  83 F8 32                  CMP EAX,0x32
0056BC4E  0F 87 0C 01 00 00         JA 0x0056bd60
0056BC54  33 C9                     XOR ECX,ECX
0056BC56  8A 88 E8 C1 56 00         MOV CL,byte ptr [EAX + 0x56c1e8]
switchD_0056bc5c::switchD:
0056BC5C  FF 24 8D D4 C1 56 00      JMP dword ptr [ECX*0x4 + 0x56c1d4]
switchD_0056bc5c::caseD_42:
0056BC63  C6 83 80 11 00 00 01      MOV byte ptr [EBX + 0x1180],0x1
0056BC6A  C6 83 63 11 00 00 02      MOV byte ptr [EBX + 0x1163],0x2
0056BC71  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0056BC77  8D 8D 04 FE FF FF         LEA ECX,[EBP + 0xfffffe04]
0056BC7D  8D 85 00 FE FF FF         LEA EAX,[EBP + 0xfffffe00]
0056BC83  6A 00                     PUSH 0x0
0056BC85  51                        PUSH ECX
0056BC86  89 95 00 FE FF FF         MOV dword ptr [EBP + 0xfffffe00],EDX
0056BC8C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056BC91  E8 5A 1B 1C 00            CALL 0x0072d7f0
0056BC96  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0056BC99  83 C4 08                  ADD ESP,0x8
0056BC9C  85 C0                     TEST EAX,EAX
0056BC9E  75 51                     JNZ 0x0056bcf1
0056BCA0  6A 00                     PUSH 0x0
0056BCA2  6A 00                     PUSH 0x0
0056BCA4  8D 93 F6 76 00 00         LEA EDX,[EBX + 0x76f6]
0056BCAA  6A 00                     PUSH 0x0
0056BCAC  52                        PUSH EDX
0056BCAD  68 45 03 00 00            PUSH 0x345
0056BCB2  E8 09 52 18 00            CALL 0x006f0ec0
0056BCB7  8B 15 80 B0 79 00         MOV EDX,dword ptr [0x0079b080]
0056BCBD  83 C4 14                  ADD ESP,0x14
0056BCC0  8D 4D C8                  LEA ECX,[EBP + -0x38]
0056BCC3  8B F0                     MOV ESI,EAX
0056BCC5  6A 00                     PUSH 0x0
0056BCC7  51                        PUSH ECX
0056BCC8  8D 83 96 11 00 00         LEA EAX,[EBX + 0x1196]
0056BCCE  52                        PUSH EDX
0056BCCF  6A 00                     PUSH 0x0
0056BCD1  8B CE                     MOV ECX,ESI
0056BCD3  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0056BCD6  E8 05 60 18 00            CALL 0x006f1ce0
0056BCDB  56                        PUSH ESI
0056BCDC  E8 8F 54 18 00            CALL 0x006f1170
0056BCE1  8B 85 00 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe00]
0056BCE7  83 C4 04                  ADD ESP,0x4
0056BCEA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056BCEF  EB 1E                     JMP 0x0056bd0f
LAB_0056bcf1:
0056BCF1  8B 8D 00 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe00]
0056BCF7  68 3E 02 00 00            PUSH 0x23e
0056BCFC  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056BD01  6A 00                     PUSH 0x0
0056BD03  50                        PUSH EAX
0056BD04  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056BD0A  E8 31 A1 13 00            CALL 0x006a5e40
LAB_0056bd0f:
0056BD0F  8B CB                     MOV ECX,EBX
0056BD11  E8 9D 68 E9 FF            CALL 0x004025b3
0056BD16  8B CB                     MOV ECX,EBX
0056BD18  E8 91 7C E9 FF            CALL 0x004039ae
0056BD1D  8B CB                     MOV ECX,EBX
0056BD1F  E8 94 68 E9 FF            CALL 0x004025b8
0056BD24  C7 83 0E 7D 00 00 00 00 00 00  MOV dword ptr [EBX + 0x7d0e],0x0
0056BD2E  EB 4A                     JMP 0x0056bd7a
switchD_0056bc5c::caseD_53:
0056BD30  C6 83 80 11 00 00 02      MOV byte ptr [EBX + 0x1180],0x2
0056BD37  C6 83 63 11 00 00 02      MOV byte ptr [EBX + 0x1163],0x2
0056BD3E  EB 3A                     JMP 0x0056bd7a
switchD_0056bc5c::caseD_41:
0056BD40  C6 83 80 11 00 00 03      MOV byte ptr [EBX + 0x1180],0x3
0056BD47  C6 83 63 11 00 00 02      MOV byte ptr [EBX + 0x1163],0x2
0056BD4E  EB 2A                     JMP 0x0056bd7a
switchD_0056bc5c::caseD_4d:
0056BD50  C6 83 80 11 00 00 08      MOV byte ptr [EBX + 0x1180],0x8
0056BD57  C6 83 63 11 00 00 01      MOV byte ptr [EBX + 0x1163],0x1
0056BD5E  EB 1A                     JMP 0x0056bd7a
switchD_0056bc5c::caseD_43:
0056BD60  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0056BD66  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0056BD69  68 4C 02 00 00            PUSH 0x24c
0056BD6E  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056BD73  52                        PUSH EDX
0056BD74  50                        PUSH EAX
0056BD75  E8 C6 A0 13 00            CALL 0x006a5e40
LAB_0056bd7a:
0056BD7A  B9 FC 09 00 00            MOV ECX,0x9fc
0056BD7F  33 C0                     XOR EAX,EAX
0056BD81  8D BB 02 4F 00 00         LEA EDI,[EBX + 0x4f02]
0056BD87  F3 AB                     STOSD.REP ES:EDI
0056BD89  8B 0D 68 71 85 00         MOV ECX,dword ptr [0x00857168]
0056BD8F  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0056BD92  8A 42 01                  MOV AL,byte ptr [EDX + 0x1]
0056BD95  3C 47                     CMP AL,0x47
0056BD97  74 1B                     JZ 0x0056bdb4
0056BD99  3C 44                     CMP AL,0x44
0056BD9B  74 17                     JZ 0x0056bdb4
0056BD9D  3C 57                     CMP AL,0x57
0056BD9F  74 13                     JZ 0x0056bdb4
0056BDA1  C7 45 E8 04 61 00 00      MOV dword ptr [EBP + -0x18],0x6104
0056BDA8  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0056BDAF  E9 E4 01 00 00            JMP 0x0056bf98
LAB_0056bdb4:
0056BDB4  68 B6 06 00 00            PUSH 0x6b6
0056BDB9  E8 72 27 1C 00            CALL 0x0072e530
0056BDBE  83 C4 04                  ADD ESP,0x4
0056BDC1  85 C0                     TEST EAX,EAX
0056BDC3  74 08                     JZ 0x0056bdcd
0056BDC5  53                        PUSH EBX
0056BDC6  8B C8                     MOV ECX,EAX
0056BDC8  E8 09 9F E9 FF            CALL 0x00405cd6
LAB_0056bdcd:
0056BDCD  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
0056BDD3  8B 01                     MOV EAX,dword ptr [ECX]
0056BDD5  FF 10                     CALL dword ptr [EAX]
0056BDD7  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
0056BDDD  6A 00                     PUSH 0x0
0056BDDF  51                        PUSH ECX
0056BDE0  8B CB                     MOV ECX,EBX
0056BDE2  E8 69 88 17 00            CALL 0x006e4650
0056BDE7  C7 45 E8 FF 60 00 00      MOV dword ptr [EBP + -0x18],0x60ff
0056BDEE  E9 A5 01 00 00            JMP 0x0056bf98
LAB_0056bdf3:
0056BDF3  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0056BDF9  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0056BDFC  68 58 02 00 00            PUSH 0x258
0056BE01  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056BE06  52                        PUSH EDX
0056BE07  50                        PUSH EAX
0056BE08  E8 33 A0 13 00            CALL 0x006a5e40
0056BE0D  E9 86 01 00 00            JMP 0x0056bf98
switchD_0056b4ce::caseD_50:
0056BE12  83 C9 FF                  OR ECX,0xffffffff
0056BE15  33 C0                     XOR EAX,EAX
0056BE17  F2 AE                     SCASB.REPNE ES:EDI
0056BE19  F7 D1                     NOT ECX
0056BE1B  49                        DEC ECX
0056BE1C  83 F9 05                  CMP ECX,0x5
0056BE1F  0F 82 73 01 00 00         JC 0x0056bf98
0056BE25  C7 83 4E 85 00 00 01 00 00 00  MOV dword ptr [EBX + 0x854e],0x1
0056BE2F  8B 0D 68 71 85 00         MOV ECX,dword ptr [0x00857168]
0056BE35  C7 45 E8 04 61 00 00      MOV dword ptr [EBP + -0x18],0x6104
0056BE3C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0056BE3F  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0056BE42  6A 02                     PUSH 0x2
0056BE44  52                        PUSH EDX
0056BE45  E8 F6 C3 14 00            CALL 0x006b8240
0056BE4A  8A 00                     MOV AL,byte ptr [EAX]
0056BE4C  2C 30                     SUB AL,0x30
0056BE4E  3C 01                     CMP AL,0x1
0056BE50  88 83 2E 11 00 00         MOV byte ptr [EBX + 0x112e],AL
0056BE56  72 04                     JC 0x0056be5c
0056BE58  3C 03                     CMP AL,0x3
0056BE5A  76 07                     JBE 0x0056be63
LAB_0056be5c:
0056BE5C  C6 83 2E 11 00 00 01      MOV byte ptr [EBX + 0x112e],0x1
LAB_0056be63:
0056BE63  A1 68 71 85 00            MOV EAX,[0x00857168]
0056BE68  6A 03                     PUSH 0x3
0056BE6A  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0056BE6D  51                        PUSH ECX
0056BE6E  E8 CD C3 14 00            CALL 0x006b8240
0056BE73  0F BE 10                  MOVSX EDX,byte ptr [EAX]
0056BE76  83 EA 30                  SUB EDX,0x30
0056BE79  6A 04                     PUSH 0x4
0056BE7B  89 93 52 85 00 00         MOV dword ptr [EBX + 0x8552],EDX
0056BE81  A1 68 71 85 00            MOV EAX,[0x00857168]
0056BE86  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0056BE89  51                        PUSH ECX
0056BE8A  E8 B1 C3 14 00            CALL 0x006b8240
0056BE8F  8D 53 60                  LEA EDX,[EBX + 0x60]
0056BE92  50                        PUSH EAX
0056BE93  52                        PUSH EDX
0056BE94  8D 83 F6 76 00 00         LEA EAX,[EBX + 0x76f6]
0056BE9A  68 E4 6E 7C 00            PUSH 0x7c6ee4
0056BE9F  50                        PUSH EAX
0056BEA0  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0056BEA6  83 C4 10                  ADD ESP,0x10
0056BEA9  E9 EA 00 00 00            JMP 0x0056bf98
switchD_0056b4ce::caseD_45:
0056BEAE  83 C9 FF                  OR ECX,0xffffffff
0056BEB1  33 C0                     XOR EAX,EAX
0056BEB3  F2 AE                     SCASB.REPNE ES:EDI
0056BEB5  F7 D1                     NOT ECX
0056BEB7  49                        DEC ECX
0056BEB8  83 F9 05                  CMP ECX,0x5
0056BEBB  0F 82 D7 00 00 00         JC 0x0056bf98
0056BEC1  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0056BEC4  85 C0                     TEST EAX,EAX
0056BEC6  0F 84 CC 00 00 00         JZ 0x0056bf98
0056BECC  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0056BECF  85 C0                     TEST EAX,EAX
0056BED1  0F 84 C1 00 00 00         JZ 0x0056bf98
0056BED7  B8 01 00 00 00            MOV EAX,0x1
0056BEDC  C7 45 E8 04 61 00 00      MOV dword ptr [EBP + -0x18],0x6104
0056BEE3  89 83 4E 85 00 00         MOV dword ptr [EBX + 0x854e],EAX
0056BEE9  8B 0D 68 71 85 00         MOV ECX,dword ptr [0x00857168]
0056BEEF  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0056BEF2  6A 02                     PUSH 0x2
0056BEF4  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0056BEF7  52                        PUSH EDX
0056BEF8  E8 43 C3 14 00            CALL 0x006b8240
0056BEFD  8A 00                     MOV AL,byte ptr [EAX]
0056BEFF  2C 30                     SUB AL,0x30
0056BF01  3C 01                     CMP AL,0x1
0056BF03  88 83 2E 11 00 00         MOV byte ptr [EBX + 0x112e],AL
0056BF09  72 04                     JC 0x0056bf0f
0056BF0B  3C 03                     CMP AL,0x3
0056BF0D  76 07                     JBE 0x0056bf16
LAB_0056bf0f:
0056BF0F  C6 83 2E 11 00 00 01      MOV byte ptr [EBX + 0x112e],0x1
LAB_0056bf16:
0056BF16  A1 68 71 85 00            MOV EAX,[0x00857168]
0056BF1B  6A 03                     PUSH 0x3
0056BF1D  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0056BF20  51                        PUSH ECX
0056BF21  E8 1A C3 14 00            CALL 0x006b8240
0056BF26  0F BE 10                  MOVSX EDX,byte ptr [EAX]
0056BF29  83 EA 30                  SUB EDX,0x30
0056BF2C  6A 04                     PUSH 0x4
0056BF2E  89 93 52 85 00 00         MOV dword ptr [EBX + 0x8552],EDX
0056BF34  A1 68 71 85 00            MOV EAX,[0x00857168]
0056BF39  8D B3 0E 4F 00 00         LEA ESI,[EBX + 0x4f0e]
0056BF3F  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0056BF42  51                        PUSH ECX
0056BF43  E8 F8 C2 14 00            CALL 0x006b8240
0056BF48  8B 3D E8 BD 85 00         MOV EDI,dword ptr [0x0085bde8]
0056BF4E  50                        PUSH EAX
0056BF4F  68 CC 4C 7A 00            PUSH 0x7a4ccc
0056BF54  56                        PUSH ESI
0056BF55  FF D7                     CALL EDI
0056BF57  8D 53 60                  LEA EDX,[EBX + 0x60]
0056BF5A  56                        PUSH ESI
0056BF5B  52                        PUSH EDX
0056BF5C  8D 83 F6 76 00 00         LEA EAX,[EBX + 0x76f6]
0056BF62  68 E4 6E 7C 00            PUSH 0x7c6ee4
0056BF67  50                        PUSH EAX
0056BF68  FF D7                     CALL EDI
0056BF6A  A1 68 71 85 00            MOV EAX,[0x00857168]
0056BF6F  83 C9 FF                  OR ECX,0xffffffff
0056BF72  83 C4 1C                  ADD ESP,0x1c
0056BF75  8D 93 E3 6C 00 00         LEA EDX,[EBX + 0x6ce3]
0056BF7B  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
0056BF7E  33 C0                     XOR EAX,EAX
0056BF80  F2 AE                     SCASB.REPNE ES:EDI
0056BF82  F7 D1                     NOT ECX
0056BF84  2B F9                     SUB EDI,ECX
0056BF86  8B C1                     MOV EAX,ECX
0056BF88  8B F7                     MOV ESI,EDI
0056BF8A  8B FA                     MOV EDI,EDX
0056BF8C  C1 E9 02                  SHR ECX,0x2
0056BF8F  F3 A5                     MOVSD.REP ES:EDI,ESI
0056BF91  8B C8                     MOV ECX,EAX
0056BF93  83 E1 03                  AND ECX,0x3
0056BF96  F3 A4                     MOVSB.REP ES:EDI,ESI
switchD_0056b4ce::caseD_48:
0056BF98  8A 83 26 0E 00 00         MOV AL,byte ptr [EBX + 0xe26]
0056BF9E  84 C0                     TEST AL,AL
0056BFA0  0F 85 8E 00 00 00         JNZ 0x0056c034
0056BFA6  81 7D E8 04 61 00 00      CMP dword ptr [EBP + -0x18],0x6104
0056BFAD  0F 84 81 00 00 00         JZ 0x0056c034
0056BFB3  C7 45 E8 23 61 00 00      MOV dword ptr [EBP + -0x18],0x6123
0056BFBA  EB 78                     JMP 0x0056c034
LAB_0056bfbc:
0056BFBC  F6 05 30 73 80 00 01      TEST byte ptr [0x00807330],0x1
0056BFC3  74 6F                     JZ 0x0056c034
0056BFC5  B9 C6 00 00 00            MOV ECX,0xc6
0056BFCA  33 C0                     XOR EAX,EAX
0056BFCC  8D BD A4 FA FF FF         LEA EDI,[EBP + 0xfffffaa4]
0056BFD2  8D 93 64 01 00 00         LEA EDX,[EBX + 0x164]
0056BFD8  F3 AB                     STOSD.REP ES:EDI
0056BFDA  8B 0D 40 B0 79 00         MOV ECX,dword ptr [0x0079b040]
0056BFE0  8D B3 1A 7D 00 00         LEA ESI,[EBX + 0x7d1a]
0056BFE6  51                        PUSH ECX
0056BFE7  52                        PUSH EDX
0056BFE8  68 E4 6E 7C 00            PUSH 0x7c6ee4
0056BFED  56                        PUSH ESI
0056BFEE  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0056BFF4  6A 00                     PUSH 0x0
0056BFF6  8D 45 CC                  LEA EAX,[EBP + -0x34]
0056BFF9  6A 00                     PUSH 0x0
0056BFFB  8D 8D A4 FA FF FF         LEA ECX,[EBP + 0xfffffaa4]
0056C001  50                        PUSH EAX
0056C002  51                        PUSH ECX
0056C003  56                        PUSH ESI
0056C004  E8 FA 83 E9 FF            CALL 0x00404403
0056C009  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
0056C00C  83 C4 24                  ADD ESP,0x24
0056C00F  83 F9 40                  CMP ECX,0x40
0056C012  75 20                     JNZ 0x0056c034
0056C014  85 C0                     TEST EAX,EAX
0056C016  74 1C                     JZ 0x0056c034
0056C018  A3 40 67 80 00            MOV [0x00806740],EAX
0056C01D  C7 45 E8 01 71 00 00      MOV dword ptr [EBP + -0x18],0x7101
0056C024  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
0056C02B  EB 07                     JMP 0x0056c034
LAB_0056c02d:
0056C02D  C7 45 E8 02 61 00 00      MOV dword ptr [EBP + -0x18],0x6102
LAB_0056c034:
0056C034  8B 13                     MOV EDX,dword ptr [EBX]
0056C036  8D 45 D8                  LEA EAX,[EBP + -0x28]
0056C039  50                        PUSH EAX
0056C03A  8B CB                     MOV ECX,EBX
0056C03C  FF 52 18                  CALL dword ptr [EDX + 0x18]
0056C03F  8B 8D 54 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff54]
0056C045  B8 01 00 00 00            MOV EAX,0x1
0056C04A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056C050  5F                        POP EDI
0056C051  5E                        POP ESI
0056C052  5B                        POP EBX
0056C053  8B E5                     MOV ESP,EBP
0056C055  5D                        POP EBP
0056C056  C2 10 00                  RET 0x10
LAB_0056c059:
0056C059  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
0056C05F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0056C062  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0056C068  8B 01                     MOV EAX,dword ptr [ECX]
0056C06A  FF 50 04                  CALL dword ptr [EAX + 0x4]
0056C06D  8D 86 F7 FF 01 50         LEA EAX,[ESI + 0x5001fff7]
0056C073  83 F8 04                  CMP EAX,0x4
0056C076  77 66                     JA 0x0056c0de
switchD_0056c078::switchD:
0056C078  FF 24 85 1C C2 56 00      JMP dword ptr [EAX*0x4 + 0x56c21c]
switchD_0056c078::caseD_affe000d:
0056C07F  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0056C085  6A 00                     PUSH 0x0
0056C087  51                        PUSH ECX
0056C088  68 48 26 00 00            PUSH 0x2648
0056C08D  E8 AE 40 14 00            CALL 0x006b0140
0056C092  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0056C098  50                        PUSH EAX
0056C099  52                        PUSH EDX
0056C09A  68 4C 26 00 00            PUSH 0x264c
0056C09F  E8 9C 40 14 00            CALL 0x006b0140
0056C0A4  50                        PUSH EAX
0056C0A5  6A 00                     PUSH 0x0
0056C0A7  FF 15 EC BD 85 00         CALL dword ptr [0x0085bdec]
0056C0AD  EB 53                     JMP 0x0056c102
switchD_0056c078::caseD_affe000a:
0056C0AF  A1 18 76 80 00            MOV EAX,[0x00807618]
0056C0B4  6A 00                     PUSH 0x0
0056C0B6  50                        PUSH EAX
0056C0B7  68 48 26 00 00            PUSH 0x2648
0056C0BC  E8 7F 40 14 00            CALL 0x006b0140
0056C0C1  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0056C0C7  50                        PUSH EAX
0056C0C8  51                        PUSH ECX
0056C0C9  68 4B 26 00 00            PUSH 0x264b
0056C0CE  E8 6D 40 14 00            CALL 0x006b0140
0056C0D3  50                        PUSH EAX
0056C0D4  6A 00                     PUSH 0x0
0056C0D6  FF 15 EC BD 85 00         CALL dword ptr [0x0085bdec]
0056C0DC  EB 24                     JMP 0x0056c102
switchD_0056c078::caseD_affe000b:
0056C0DE  68 A4 A0 7C 00            PUSH 0x7ca0a4
0056C0E3  68 CC 4C 7A 00            PUSH 0x7a4ccc
0056C0E8  56                        PUSH ESI
0056C0E9  6A 00                     PUSH 0x0
0056C0EB  68 C9 02 00 00            PUSH 0x2c9
0056C0F0  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056C0F5  E8 D6 13 14 00            CALL 0x006ad4d0
0056C0FA  83 C4 18                  ADD ESP,0x18
0056C0FD  85 C0                     TEST EAX,EAX
0056C0FF  74 01                     JZ 0x0056c102
0056C101  CC                        INT3
switchD_0056c078::caseD_affe0009:
0056C102  68 CC 02 00 00            PUSH 0x2cc
0056C107  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056C10C  6A 00                     PUSH 0x0
0056C10E  56                        PUSH ESI
0056C10F  E8 2C 9D 13 00            CALL 0x006a5e40
0056C114  5F                        POP EDI
0056C115  5E                        POP ESI
0056C116  33 C0                     XOR EAX,EAX
0056C118  5B                        POP EBX
0056C119  8B E5                     MOV ESP,EBP
0056C11B  5D                        POP EBP
0056C11C  C2 10 00                  RET 0x10
