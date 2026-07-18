FUN_005b5240:
005B5240  55                        PUSH EBP
005B5241  8B EC                     MOV EBP,ESP
005B5243  83 EC 44                  SUB ESP,0x44
005B5246  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B524B  53                        PUSH EBX
005B524C  56                        PUSH ESI
005B524D  57                        PUSH EDI
005B524E  8D 55 C0                  LEA EDX,[EBP + -0x40]
005B5251  8D 4D BC                  LEA ECX,[EBP + -0x44]
005B5254  6A 00                     PUSH 0x0
005B5256  52                        PUSH EDX
005B5257  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
005B525A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B5260  E8 8B 85 17 00            CALL 0x0072d7f0
005B5265  8B F0                     MOV ESI,EAX
005B5267  83 C4 08                  ADD ESP,0x8
005B526A  85 F6                     TEST ESI,ESI
005B526C  0F 85 BF 01 00 00         JNZ 0x005b5431
005B5272  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005B5275  B9 09 00 00 00            MOV ECX,0x9
005B527A  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
005B527D  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
005B5280  8D 7E 21                  LEA EDI,[ESI + 0x21]
005B5283  6A 00                     PUSH 0x0
005B5285  F3 AB                     STOSD.REP ES:EDI
005B5287  66 AB                     STOSW ES:EDI
005B5289  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
005B528C  6A 00                     PUSH 0x0
005B528E  AA                        STOSB ES:EDI
005B528F  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
005B5292  89 4E 08                  MOV dword ptr [ESI + 0x8],ECX
005B5295  89 06                     MOV dword ptr [ESI],EAX
005B5297  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
005B529A  89 56 04                  MOV dword ptr [ESI + 0x4],EDX
005B529D  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
005B52A0  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005B52A6  6A 00                     PUSH 0x0
005B52A8  6A 07                     PUSH 0x7
005B52AA  8D 7E 48                  LEA EDI,[ESI + 0x48]
005B52AD  53                        PUSH EBX
005B52AE  51                        PUSH ECX
005B52AF  8B CF                     MOV ECX,EDI
005B52B1  E8 EA 05 16 00            CALL 0x007158a0
005B52B6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005B52B9  8B 0D 84 67 80 00         MOV ECX,dword ptr [0x00806784]
005B52BF  8B 17                     MOV EDX,dword ptr [EDI]
005B52C1  6A FF                     PUSH -0x1
005B52C3  50                        PUSH EAX
005B52C4  6A 00                     PUSH 0x0
005B52C6  6A 07                     PUSH 0x7
005B52C8  51                        PUSH ECX
005B52C9  8B CF                     MOV ECX,EDI
005B52CB  FF 52 04                  CALL dword ptr [EDX + 0x4]
005B52CE  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005B52D1  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005B52D4  89 56 64                  MOV dword ptr [ESI + 0x64],EDX
005B52D7  89 46 68                  MOV dword ptr [ESI + 0x68],EAX
005B52DA  C7 46 50 00 00 00 00      MOV dword ptr [ESI + 0x50],0x0
005B52E1  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005B52E4  83 F8 FF                  CMP EAX,-0x1
005B52E7  74 16                     JZ 0x005b52ff
005B52E9  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
005B52EC  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
005B52EF  51                        PUSH ECX
005B52F0  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
005B52F3  52                        PUSH EDX
005B52F4  8B 57 48                  MOV EDX,dword ptr [EDI + 0x48]
005B52F7  51                        PUSH ECX
005B52F8  50                        PUSH EAX
005B52F9  52                        PUSH EDX
005B52FA  E8 31 E4 0F 00            CALL 0x006b3730
LAB_005b52ff:
005B52FF  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
005B5302  85 C0                     TEST EAX,EAX
005B5304  0F 84 84 00 00 00         JZ 0x005b538e
005B530A  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
005B530D  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
005B5310  8B 55 40                  MOV EDX,dword ptr [EBP + 0x40]
005B5313  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
005B5316  8B 45 44                  MOV EAX,dword ptr [EBP + 0x44]
005B5319  89 4E 14                  MOV dword ptr [ESI + 0x14],ECX
005B531C  8B 4D 48                  MOV ECX,dword ptr [EBP + 0x48]
005B531F  6A 00                     PUSH 0x0
005B5321  89 56 18                  MOV dword ptr [ESI + 0x18],EDX
005B5324  6A 00                     PUSH 0x0
005B5326  C6 46 47 01               MOV byte ptr [ESI + 0x47],0x1
005B532A  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005B532D  89 8E AA 01 00 00         MOV dword ptr [ESI + 0x1aa],ECX
005B5333  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005B5338  6A 00                     PUSH 0x0
005B533A  8D 53 FF                  LEA EDX,[EBX + -0x1]
005B533D  8D BE 6A 01 00 00         LEA EDI,[ESI + 0x16a]
005B5343  6A 07                     PUSH 0x7
005B5345  52                        PUSH EDX
005B5346  50                        PUSH EAX
005B5347  8B CF                     MOV ECX,EDI
005B5349  E8 52 05 16 00            CALL 0x007158a0
005B534E  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
005B5351  8B 0D 84 67 80 00         MOV ECX,dword ptr [0x00806784]
005B5357  8B 17                     MOV EDX,dword ptr [EDI]
005B5359  6A FF                     PUSH -0x1
005B535B  50                        PUSH EAX
005B535C  6A 00                     PUSH 0x0
005B535E  6A 07                     PUSH 0x7
005B5360  51                        PUSH ECX
005B5361  8B CF                     MOV ECX,EDI
005B5363  FF 52 04                  CALL dword ptr [EDX + 0x4]
005B5366  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005B5369  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
005B536C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005B536F  03 D0                     ADD EDX,EAX
005B5371  89 96 86 01 00 00         MOV dword ptr [ESI + 0x186],EDX
005B5377  8B 55 3C                  MOV EDX,dword ptr [EBP + 0x3c]
005B537A  03 CA                     ADD ECX,EDX
005B537C  C7 86 72 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x172],0x0
005B5386  89 8E 8A 01 00 00         MOV dword ptr [ESI + 0x18a],ECX
005B538C  EB 04                     JMP 0x005b5392
LAB_005b538e:
005B538E  C6 46 47 00               MOV byte ptr [ESI + 0x47],0x0
LAB_005b5392:
005B5392  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005B5397  6A 00                     PUSH 0x0
005B5399  6A 00                     PUSH 0x0
005B539B  6A 00                     PUSH 0x0
005B539D  83 C3 FE                  ADD EBX,-0x2
005B53A0  8D BE D9 00 00 00         LEA EDI,[ESI + 0xd9]
005B53A6  6A 07                     PUSH 0x7
005B53A8  53                        PUSH EBX
005B53A9  50                        PUSH EAX
005B53AA  8B CF                     MOV ECX,EDI
005B53AC  E8 EF 04 16 00            CALL 0x007158a0
005B53B1  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
005B53B4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005B53B7  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005B53BA  03 D1                     ADD EDX,ECX
005B53BC  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005B53BF  89 96 F5 00 00 00         MOV dword ptr [ESI + 0xf5],EDX
005B53C5  03 C8                     ADD ECX,EAX
005B53C7  8B 45 4C                  MOV EAX,dword ptr [EBP + 0x4c]
005B53CA  85 C0                     TEST EAX,EAX
005B53CC  89 8E F9 00 00 00         MOV dword ptr [ESI + 0xf9],ECX
005B53D2  74 41                     JZ 0x005b5415
005B53D4  8B 4D 50                  MOV ECX,dword ptr [EBP + 0x50]
005B53D7  85 C9                     TEST ECX,ECX
005B53D9  74 3A                     JZ 0x005b5415
005B53DB  8B 55 64                  MOV EDX,dword ptr [EBP + 0x64]
005B53DE  8B 4D 60                  MOV ECX,dword ptr [EBP + 0x60]
005B53E1  6A FF                     PUSH -0x1
005B53E3  6A 07                     PUSH 0x7
005B53E5  52                        PUSH EDX
005B53E6  8B 55 5C                  MOV EDX,dword ptr [EBP + 0x5c]
005B53E9  51                        PUSH ECX
005B53EA  8B 4D 58                  MOV ECX,dword ptr [EBP + 0x58]
005B53ED  8B 1F                     MOV EBX,dword ptr [EDI]
005B53EF  52                        PUSH EDX
005B53F0  8B 55 54                  MOV EDX,dword ptr [EBP + 0x54]
005B53F3  6A FF                     PUSH -0x1
005B53F5  6A FE                     PUSH -0x2
005B53F7  51                        PUSH ECX
005B53F8  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005B53FE  52                        PUSH EDX
005B53FF  51                        PUSH ECX
005B5400  50                        PUSH EAX
005B5401  E8 3A AD 0F 00            CALL 0x006b0140
005B5406  8B 4D 50                  MOV ECX,dword ptr [EBP + 0x50]
005B5409  50                        PUSH EAX
005B540A  E8 71 E0 15 00            CALL 0x00713480
005B540F  50                        PUSH EAX
005B5410  8B CF                     MOV ECX,EDI
005B5412  FF 53 08                  CALL dword ptr [EBX + 0x8]
LAB_005b5415:
005B5415  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
005B5418  C7 86 E1 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xe1],0x0
005B5422  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B5428  5F                        POP EDI
005B5429  5E                        POP ESI
005B542A  5B                        POP EBX
005B542B  8B E5                     MOV ESP,EBP
005B542D  5D                        POP EBP
005B542E  C2 60 00                  RET 0x60
LAB_005b5431:
005B5431  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
005B5434  68 60 CA 7C 00            PUSH 0x7cca60
005B5439  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B543E  56                        PUSH ESI
005B543F  6A 00                     PUSH 0x0
005B5441  6A 2D                     PUSH 0x2d
005B5443  68 38 CA 7C 00            PUSH 0x7cca38
005B5448  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B544D  E8 7E 80 0F 00            CALL 0x006ad4d0
005B5452  83 C4 18                  ADD ESP,0x18
005B5455  85 C0                     TEST EAX,EAX
005B5457  74 01                     JZ 0x005b545a
005B5459  CC                        INT3
LAB_005b545a:
005B545A  6A 2D                     PUSH 0x2d
005B545C  68 38 CA 7C 00            PUSH 0x7cca38
005B5461  6A 00                     PUSH 0x0
005B5463  56                        PUSH ESI
005B5464  E8 D7 09 0F 00            CALL 0x006a5e40
005B5469  5F                        POP EDI
005B546A  5E                        POP ESI
005B546B  5B                        POP EBX
005B546C  8B E5                     MOV ESP,EBP
005B546E  5D                        POP EBP
005B546F  C2 60 00                  RET 0x60
