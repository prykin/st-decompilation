FUN_004f4f90:
004F4F90  53                        PUSH EBX
004F4F91  56                        PUSH ESI
004F4F92  57                        PUSH EDI
004F4F93  8B F1                     MOV ESI,ECX
004F4F95  E8 16 10 1F 00            CALL 0x006e5fb0
004F4F9A  33 DB                     XOR EBX,EBX
004F4F9C  C7 06 18 AC 79 00         MOV dword ptr [ESI],0x79ac18
004F4FA2  89 9E 34 01 00 00         MOV dword ptr [ESI + 0x134],EBX
004F4FA8  89 9E 38 01 00 00         MOV dword ptr [ESI + 0x138],EBX
004F4FAE  89 9E 30 01 00 00         MOV dword ptr [ESI + 0x130],EBX
004F4FB4  89 9E 40 01 00 00         MOV dword ptr [ESI + 0x140],EBX
004F4FBA  89 9E 3C 01 00 00         MOV dword ptr [ESI + 0x13c],EBX
004F4FC0  B9 0B 00 00 00            MOV ECX,0xb
004F4FC5  33 C0                     XOR EAX,EAX
004F4FC7  8D 7E 3C                  LEA EDI,[ESI + 0x3c]
004F4FCA  C7 86 2C 01 00 00 01 00 00 00  MOV dword ptr [ESI + 0x12c],0x1
004F4FD4  8D 96 94 00 00 00         LEA EDX,[ESI + 0x94]
004F4FDA  F3 AB                     STOSD.REP ES:EDI
004F4FDC  B9 0B 00 00 00            MOV ECX,0xb
004F4FE1  8B FA                     MOV EDI,EDX
004F4FE3  F3 AB                     STOSD.REP ES:EDI
004F4FE5  8D 7E 68                  LEA EDI,[ESI + 0x68]
004F4FE8  B9 0B 00 00 00            MOV ECX,0xb
004F4FED  F3 AB                     STOSD.REP ES:EDI
004F4FEF  8D BE C0 00 00 00         LEA EDI,[ESI + 0xc0]
004F4FF5  B9 0B 00 00 00            MOV ECX,0xb
004F4FFA  F3 AB                     STOSD.REP ES:EDI
004F4FFC  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
004F5003  0F 85 91 00 00 00         JNZ 0x004f509a
004F5009  C7 46 68 53 00 00 00      MOV dword ptr [ESI + 0x68],0x53
004F5010  A1 34 67 80 00            MOV EAX,[0x00806734]
004F5015  89 02                     MOV dword ptr [EDX],EAX
004F5017  C7 86 C0 00 00 00 43 00 00 00  MOV dword ptr [ESI + 0xc0],0x43
004F5021  C7 46 6C 53 00 00 00      MOV dword ptr [ESI + 0x6c],0x53
004F5028  8B 0A                     MOV ECX,dword ptr [EDX]
004F502A  03 8E C0 00 00 00         ADD ECX,dword ptr [ESI + 0xc0]
004F5030  89 8E 98 00 00 00         MOV dword ptr [ESI + 0x98],ECX
004F5036  B9 58 00 00 00            MOV ECX,0x58
004F503B  89 8E C4 00 00 00         MOV dword ptr [ESI + 0xc4],ECX
004F5041  C7 46 74 D2 00 00 00      MOV dword ptr [ESI + 0x74],0xd2
004F5048  A1 34 67 80 00            MOV EAX,[0x00806734]
004F504D  89 86 A0 00 00 00         MOV dword ptr [ESI + 0xa0],EAX
004F5053  B8 9B 00 00 00            MOV EAX,0x9b
004F5058  89 86 CC 00 00 00         MOV dword ptr [ESI + 0xcc],EAX
004F505E  C7 46 78 97 00 00 00      MOV dword ptr [ESI + 0x78],0x97
004F5065  8B 3D 34 67 80 00         MOV EDI,dword ptr [0x00806734]
004F506B  89 BE A4 00 00 00         MOV dword ptr [ESI + 0xa4],EDI
004F5071  89 86 D0 00 00 00         MOV dword ptr [ESI + 0xd0],EAX
004F5077  C7 46 7C E9 00 00 00      MOV dword ptr [ESI + 0x7c],0xe9
004F507E  8B 3D 34 67 80 00         MOV EDI,dword ptr [0x00806734]
004F5084  89 BE A8 00 00 00         MOV dword ptr [ESI + 0xa8],EDI
004F508A  89 86 D4 00 00 00         MOV dword ptr [ESI + 0xd4],EAX
004F5090  BF 53 00 00 00            MOV EDI,0x53
004F5095  E9 C1 00 00 00            JMP 0x004f515b
LAB_004f509a:
004F509A  B8 51 00 00 00            MOV EAX,0x51
004F509F  89 46 68                  MOV dword ptr [ESI + 0x68],EAX
004F50A2  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
004F50A8  89 0A                     MOV dword ptr [EDX],ECX
004F50AA  C7 86 C0 00 00 00 43 00 00 00  MOV dword ptr [ESI + 0xc0],0x43
004F50B4  89 46 6C                  MOV dword ptr [ESI + 0x6c],EAX
004F50B7  8B 02                     MOV EAX,dword ptr [EDX]
004F50B9  8B 8E C0 00 00 00         MOV ECX,dword ptr [ESI + 0xc0]
004F50BF  03 C1                     ADD EAX,ECX
004F50C1  B9 58 00 00 00            MOV ECX,0x58
004F50C6  89 86 98 00 00 00         MOV dword ptr [ESI + 0x98],EAX
004F50CC  89 8E C4 00 00 00         MOV dword ptr [ESI + 0xc4],ECX
004F50D2  C7 46 70 1A 00 00 00      MOV dword ptr [ESI + 0x70],0x1a
004F50D9  A1 34 67 80 00            MOV EAX,[0x00806734]
004F50DE  89 86 9C 00 00 00         MOV dword ptr [ESI + 0x9c],EAX
004F50E4  B8 9B 00 00 00            MOV EAX,0x9b
004F50E9  89 86 C8 00 00 00         MOV dword ptr [ESI + 0xc8],EAX
004F50EF  C7 46 74 BB 00 00 00      MOV dword ptr [ESI + 0x74],0xbb
004F50F6  8B 3D 34 67 80 00         MOV EDI,dword ptr [0x00806734]
004F50FC  89 BE A0 00 00 00         MOV dword ptr [ESI + 0xa0],EDI
004F5102  89 86 CC 00 00 00         MOV dword ptr [ESI + 0xcc],EAX
004F5108  C7 46 78 95 00 00 00      MOV dword ptr [ESI + 0x78],0x95
004F510F  8B 3D 34 67 80 00         MOV EDI,dword ptr [0x00806734]
004F5115  89 BE A4 00 00 00         MOV dword ptr [ESI + 0xa4],EDI
004F511B  89 86 D0 00 00 00         MOV dword ptr [ESI + 0xd0],EAX
004F5121  C7 46 7C D2 00 00 00      MOV dword ptr [ESI + 0x7c],0xd2
004F5128  8B 3D 34 67 80 00         MOV EDI,dword ptr [0x00806734]
004F512E  89 BE A8 00 00 00         MOV dword ptr [ESI + 0xa8],EDI
004F5134  89 86 D4 00 00 00         MOV dword ptr [ESI + 0xd4],EAX
004F513A  C7 86 80 00 00 00 1A 00 00 00  MOV dword ptr [ESI + 0x80],0x1a
004F5144  8B 3D 34 67 80 00         MOV EDI,dword ptr [0x00806734]
004F514A  89 BE AC 00 00 00         MOV dword ptr [ESI + 0xac],EDI
004F5150  89 86 D8 00 00 00         MOV dword ptr [ESI + 0xd8],EAX
004F5156  BF 51 00 00 00            MOV EDI,0x51
LAB_004f515b:
004F515B  89 BE 84 00 00 00         MOV dword ptr [ESI + 0x84],EDI
004F5161  8B 12                     MOV EDX,dword ptr [EDX]
004F5163  03 96 C0 00 00 00         ADD EDX,dword ptr [ESI + 0xc0]
004F5169  89 96 B0 00 00 00         MOV dword ptr [ESI + 0xb0],EDX
004F516F  89 8E DC 00 00 00         MOV dword ptr [ESI + 0xdc],ECX
004F5175  89 BE 88 00 00 00         MOV dword ptr [ESI + 0x88],EDI
004F517B  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
004F5181  89 8E B4 00 00 00         MOV dword ptr [ESI + 0xb4],ECX
004F5187  C7 86 E0 00 00 00 43 00 00 00  MOV dword ptr [ESI + 0xe0],0x43
004F5191  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
004F5197  89 96 B8 00 00 00         MOV dword ptr [ESI + 0xb8],EDX
004F519D  89 86 E4 00 00 00         MOV dword ptr [ESI + 0xe4],EAX
004F51A3  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
004F51A9  89 8E BC 00 00 00         MOV dword ptr [ESI + 0xbc],ECX
004F51AF  89 86 E8 00 00 00         MOV dword ptr [ESI + 0xe8],EAX
004F51B5  C7 86 F0 00 00 00 1E 00 00 00  MOV dword ptr [ESI + 0xf0],0x1e
004F51BF  C7 86 04 01 00 00 2B 02 00 00  MOV dword ptr [ESI + 0x104],0x22b
004F51C9  8D 86 80 01 00 00         LEA EAX,[ESI + 0x180]
004F51CF  B9 0B 00 00 00            MOV ECX,0xb
LAB_004f51d4:
004F51D4  C7 40 C8 FF FF FF FF      MOV dword ptr [EAX + -0x38],0xffffffff
004F51DB  89 18                     MOV dword ptr [EAX],EBX
004F51DD  83 C0 04                  ADD EAX,0x4
004F51E0  49                        DEC ECX
004F51E1  75 F1                     JNZ 0x004f51d4
004F51E3  83 CA FF                  OR EDX,0xffffffff
004F51E6  8D 86 E1 01 00 00         LEA EAX,[ESI + 0x1e1]
004F51EC  89 96 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EDX
004F51F2  89 96 78 01 00 00         MOV dword ptr [ESI + 0x178],EDX
004F51F8  89 96 74 01 00 00         MOV dword ptr [ESI + 0x174],EDX
004F51FE  89 9E B4 01 00 00         MOV dword ptr [ESI + 0x1b4],EBX
004F5204  89 9E B0 01 00 00         MOV dword ptr [ESI + 0x1b0],EBX
004F520A  89 9E AC 01 00 00         MOV dword ptr [ESI + 0x1ac],EBX
004F5210  89 9E C8 01 00 00         MOV dword ptr [ESI + 0x1c8],EBX
004F5216  89 9E C4 01 00 00         MOV dword ptr [ESI + 0x1c4],EBX
004F521C  89 9E C0 01 00 00         MOV dword ptr [ESI + 0x1c0],EBX
004F5222  89 9E BC 01 00 00         MOV dword ptr [ESI + 0x1bc],EBX
004F5228  89 9E B8 01 00 00         MOV dword ptr [ESI + 0x1b8],EBX
004F522E  89 86 13 02 00 00         MOV dword ptr [ESI + 0x213],EAX
004F5234  89 9E D4 01 00 00         MOV dword ptr [ESI + 0x1d4],EBX
004F523A  89 9E D0 01 00 00         MOV dword ptr [ESI + 0x1d0],EBX
004F5240  89 9E CC 01 00 00         MOV dword ptr [ESI + 0x1cc],EBX
004F5246  66 C7 86 3F 02 00 00 01 00  MOV word ptr [ESI + 0x23f],0x1
004F524F  89 9E 4B 02 00 00         MOV dword ptr [ESI + 0x24b],EBX
004F5255  89 9E 4F 02 00 00         MOV dword ptr [ESI + 0x24f],EBX
004F525B  89 9E 57 02 00 00         MOV dword ptr [ESI + 0x257],EBX
004F5261  89 9E 53 02 00 00         MOV dword ptr [ESI + 0x253],EBX
004F5267  89 9E D8 01 00 00         MOV dword ptr [ESI + 0x1d8],EBX
004F526D  89 9E 5B 02 00 00         MOV dword ptr [ESI + 0x25b],EBX
004F5273  88 9E 5F 02 00 00         MOV byte ptr [ESI + 0x25f],BL
004F5279  C6 86 60 02 00 00 02      MOV byte ptr [ESI + 0x260],0x2
004F5280  33 C9                     XOR ECX,ECX
004F5282  89 9E 61 02 00 00         MOV dword ptr [ESI + 0x261],EBX
004F5288  88 9E 65 02 00 00         MOV byte ptr [ESI + 0x265],BL
004F528E  C6 86 85 02 00 00 01      MOV byte ptr [ESI + 0x285],0x1
004F5295  89 9E 8A 02 00 00         MOV dword ptr [ESI + 0x28a],EBX
004F529B  89 9E 86 02 00 00         MOV dword ptr [ESI + 0x286],EBX
004F52A1  89 9E CE 02 00 00         MOV dword ptr [ESI + 0x2ce],EBX
004F52A7  89 9E DE 02 00 00         MOV dword ptr [ESI + 0x2de],EBX
004F52AD  89 9E DA 02 00 00         MOV dword ptr [ESI + 0x2da],EBX
004F52B3  89 9E D6 02 00 00         MOV dword ptr [ESI + 0x2d6],EBX
004F52B9  89 9E D2 02 00 00         MOV dword ptr [ESI + 0x2d2],EBX
004F52BF  89 9E CC 09 00 00         MOV dword ptr [ESI + 0x9cc],EBX
004F52C5  89 9E C8 09 00 00         MOV dword ptr [ESI + 0x9c8],EBX
004F52CB  89 9E CA 02 00 00         MOV dword ptr [ESI + 0x2ca],EBX
004F52D1  89 9E C6 02 00 00         MOV dword ptr [ESI + 0x2c6],EBX
004F52D7  89 9E C2 02 00 00         MOV dword ptr [ESI + 0x2c2],EBX
004F52DD  89 9E BA 02 00 00         MOV dword ptr [ESI + 0x2ba],EBX
004F52E3  89 9E B6 02 00 00         MOV dword ptr [ESI + 0x2b6],EBX
004F52E9  89 9E B2 02 00 00         MOV dword ptr [ESI + 0x2b2],EBX
004F52EF  89 9E A2 02 00 00         MOV dword ptr [ESI + 0x2a2],EBX
004F52F5  89 9E 9E 02 00 00         MOV dword ptr [ESI + 0x29e],EBX
004F52FB  89 9E 9A 02 00 00         MOV dword ptr [ESI + 0x29a],EBX
004F5301  89 9E 96 02 00 00         MOV dword ptr [ESI + 0x296],EBX
004F5307  89 9E 92 02 00 00         MOV dword ptr [ESI + 0x292],EBX
004F530D  89 9E 8E 02 00 00         MOV dword ptr [ESI + 0x28e],EBX
004F5313  89 8E E2 02 00 00         MOV dword ptr [ESI + 0x2e2],ECX
004F5319  89 8E E6 02 00 00         MOV dword ptr [ESI + 0x2e6],ECX
004F531F  8D 8E 4F 0B 00 00         LEA ECX,[ESI + 0xb4f]
004F5325  33 C0                     XOR EAX,EAX
004F5327  89 9E 4B 0B 00 00         MOV dword ptr [ESI + 0xb4b],EBX
004F532D  89 01                     MOV dword ptr [ECX],EAX
004F532F  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
004F5332  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
004F5335  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
004F5338  89 41 10                  MOV dword ptr [ECX + 0x10],EAX
004F533B  8D 8E FE 02 00 00         LEA ECX,[ESI + 0x2fe]
LAB_004f5341:
004F5341  89 59 0A                  MOV dword ptr [ECX + 0xa],EBX
004F5344  89 19                     MOV dword ptr [ECX],EBX
004F5346  C6 84 06 06 03 00 00 01   MOV byte ptr [ESI + EAX*0x1 + 0x306],0x1
004F534E  40                        INC EAX
004F534F  83 C1 04                  ADD ECX,0x4
004F5352  83 F8 02                  CMP EAX,0x2
004F5355  7C EA                     JL 0x004f5341
004F5357  33 C0                     XOR EAX,EAX
004F5359  B9 18 01 00 00            MOV ECX,0x118
004F535E  89 86 10 03 00 00         MOV dword ptr [ESI + 0x310],EAX
004F5364  8D BE 1C 03 00 00         LEA EDI,[ESI + 0x31c]
004F536A  89 86 14 03 00 00         MOV dword ptr [ESI + 0x314],EAX
004F5370  89 86 18 03 00 00         MOV dword ptr [ESI + 0x318],EAX
004F5376  F3 AB                     STOSD.REP ES:EDI
004F5378  89 9E 7C 07 00 00         MOV dword ptr [ESI + 0x77c],EBX
004F537E  66 89 96 A8 02 00 00      MOV word ptr [ESI + 0x2a8],DX
004F5385  B9 0D 00 00 00            MOV ECX,0xd
004F538A  8D BE 63 0B 00 00         LEA EDI,[ESI + 0xb63]
004F5390  89 9E 58 09 00 00         MOV dword ptr [ESI + 0x958],EBX
004F5396  89 9E 54 09 00 00         MOV dword ptr [ESI + 0x954],EBX
004F539C  89 9E 5C 09 00 00         MOV dword ptr [ESI + 0x95c],EBX
004F53A2  F3 AB                     STOSD.REP ES:EDI
004F53A4  66 AB                     STOSW ES:EDI
004F53A6  B9 08 00 00 00            MOV ECX,0x8
004F53AB  33 C0                     XOR EAX,EAX
004F53AD  8D BE 74 09 00 00         LEA EDI,[ESI + 0x974]
004F53B3  F3 AB                     STOSD.REP ES:EDI
004F53B5  B9 17 00 00 00            MOV ECX,0x17
004F53BA  8D BE 99 0B 00 00         LEA EDI,[ESI + 0xb99]
004F53C0  F3 AB                     STOSD.REP ES:EDI
004F53C2  33 C9                     XOR ECX,ECX
004F53C4  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004F53C9  89 8E 60 09 00 00         MOV dword ptr [ESI + 0x960],ECX
004F53CF  8D BE A4 09 00 00         LEA EDI,[ESI + 0x9a4]
004F53D5  89 8E 64 09 00 00         MOV dword ptr [ESI + 0x964],ECX
004F53DB  89 8E 68 09 00 00         MOV dword ptr [ESI + 0x968],ECX
004F53E1  89 8E 6C 09 00 00         MOV dword ptr [ESI + 0x96c],ECX
004F53E7  89 9E 70 09 00 00         MOV dword ptr [ESI + 0x970],EBX
004F53ED  89 9E 94 09 00 00         MOV dword ptr [ESI + 0x994],EBX
004F53F3  89 9E 9C 09 00 00         MOV dword ptr [ESI + 0x99c],EBX
004F53F9  89 9E 98 09 00 00         MOV dword ptr [ESI + 0x998],EBX
004F53FF  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004F5405  B9 07 00 00 00            MOV ECX,0x7
004F540A  F7 A2 E4 00 00 00         MUL dword ptr [EDX + 0xe4]
004F5410  C1 EA 03                  SHR EDX,0x3
004F5413  33 C0                     XOR EAX,EAX
004F5415  89 96 A0 09 00 00         MOV dword ptr [ESI + 0x9a0],EDX
004F541B  F3 AB                     STOSD.REP ES:EDI
004F541D  8D 8E C0 09 00 00         LEA ECX,[ESI + 0x9c0]
004F5423  33 D2                     XOR EDX,EDX
004F5425  8D BE D9 09 00 00         LEA EDI,[ESI + 0x9d9]
004F542B  89 01                     MOV dword ptr [ECX],EAX
004F542D  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
004F5430  8D 86 B7 0D 00 00         LEA EAX,[ESI + 0xdb7]
004F5436  89 9E B3 0D 00 00         MOV dword ptr [ESI + 0xdb3],EBX
004F543C  33 C9                     XOR ECX,ECX
004F543E  89 10                     MOV dword ptr [EAX],EDX
004F5440  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
004F5443  8D 96 BF 0D 00 00         LEA EDX,[ESI + 0xdbf]
004F5449  33 C0                     XOR EAX,EAX
004F544B  89 0A                     MOV dword ptr [EDX],ECX
004F544D  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
004F5450  8D 8E 27 02 00 00         LEA ECX,[ESI + 0x227]
004F5456  89 86 27 02 00 00         MOV dword ptr [ESI + 0x227],EAX
004F545C  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
004F545F  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
004F5462  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
004F5465  83 C8 FF                  OR EAX,0xffffffff
004F5468  89 86 3B 02 00 00         MOV dword ptr [ESI + 0x23b],EAX
004F546E  89 86 37 02 00 00         MOV dword ptr [ESI + 0x237],EAX
004F5474  B9 0F 00 00 00            MOV ECX,0xf
004F5479  33 C0                     XOR EAX,EAX
004F547B  F3 AB                     STOSD.REP ES:EDI
004F547D  B9 17 00 00 00            MOV ECX,0x17
004F5482  8D BE F5 0B 00 00         LEA EDI,[ESI + 0xbf5]
004F5488  F3 AB                     STOSD.REP ES:EDI
004F548A  89 9E D0 09 00 00         MOV dword ptr [ESI + 0x9d0],EBX
004F5490  B9 06 00 00 00            MOV ECX,0x6
004F5495  8D BE 15 0A 00 00         LEA EDI,[ESI + 0xa15]
004F549B  C6 86 D4 09 00 00 01      MOV byte ptr [ESI + 0x9d4],0x1
004F54A2  F3 AB                     STOSD.REP ES:EDI
004F54A4  89 9E 1B 0B 00 00         MOV dword ptr [ESI + 0xb1b],EBX
004F54AA  89 9E D5 09 00 00         MOV dword ptr [ESI + 0x9d5],EBX
004F54B0  B9 06 00 00 00            MOV ECX,0x6
004F54B5  8D BE 1F 0B 00 00         LEA EDI,[ESI + 0xb1f]
004F54BB  89 9E 17 0B 00 00         MOV dword ptr [ESI + 0xb17],EBX
004F54C1  F3 AB                     STOSD.REP ES:EDI
004F54C3  89 9E 37 0B 00 00         MOV dword ptr [ESI + 0xb37],EBX
004F54C9  8D 86 3B 0B 00 00         LEA EAX,[ESI + 0xb3b]
004F54CF  33 D2                     XOR EDX,EDX
004F54D1  B9 0D 00 00 00            MOV ECX,0xd
004F54D6  8D BE 51 0C 00 00         LEA EDI,[ESI + 0xc51]
004F54DC  89 10                     MOV dword ptr [EAX],EDX
004F54DE  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
004F54E1  89 9E 47 0B 00 00         MOV dword ptr [ESI + 0xb47],EBX
004F54E7  33 C0                     XOR EAX,EAX
004F54E9  89 9E 43 0B 00 00         MOV dword ptr [ESI + 0xb43],EBX
004F54EF  F3 AB                     STOSD.REP ES:EDI
004F54F1  66 AB                     STOSW ES:EDI
004F54F3  B9 21 00 00 00            MOV ECX,0x21
004F54F8  33 C0                     XOR EAX,EAX
004F54FA  8D BE 87 0C 00 00         LEA EDI,[ESI + 0xc87]
004F5500  F3 AB                     STOSD.REP ES:EDI
004F5502  8D BE 0B 0D 00 00         LEA EDI,[ESI + 0xd0b]
004F5508  B9 0C 00 00 00            MOV ECX,0xc
004F550D  F3 AB                     STOSD.REP ES:EDI
004F550F  8B C6                     MOV EAX,ESI
004F5511  5F                        POP EDI
004F5512  5E                        POP ESI
004F5513  5B                        POP EBX
004F5514  C3                        RET
