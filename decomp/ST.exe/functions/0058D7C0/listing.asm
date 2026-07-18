FUN_0058d7c0:
0058D7C0  55                        PUSH EBP
0058D7C1  8B EC                     MOV EBP,ESP
0058D7C3  83 EC 7C                  SUB ESP,0x7c
0058D7C6  8B 81 57 02 00 00         MOV EAX,dword ptr [ECX + 0x257]
0058D7CC  53                        PUSH EBX
0058D7CD  56                        PUSH ESI
0058D7CE  83 F8 08                  CMP EAX,0x8
0058D7D1  57                        PUSH EDI
0058D7D2  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0058D7D5  75 14                     JNZ 0x0058d7eb
0058D7D7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0058D7DA  83 78 10 03               CMP dword ptr [EAX + 0x10],0x3
0058D7DE  74 0B                     JZ 0x0058d7eb
0058D7E0  33 C0                     XOR EAX,EAX
0058D7E2  5F                        POP EDI
0058D7E3  5E                        POP ESI
0058D7E4  5B                        POP EBX
0058D7E5  8B E5                     MOV ESP,EBP
0058D7E7  5D                        POP EBP
0058D7E8  C2 04 00                  RET 0x4
LAB_0058d7eb:
0058D7EB  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0058D7F1  33 FF                     XOR EDI,EDI
0058D7F3  8D 45 88                  LEA EAX,[EBP + -0x78]
0058D7F6  8D 55 84                  LEA EDX,[EBP + -0x7c]
0058D7F9  57                        PUSH EDI
0058D7FA  50                        PUSH EAX
0058D7FB  89 4D 84                  MOV dword ptr [EBP + -0x7c],ECX
0058D7FE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0058D804  E8 E7 FF 19 00            CALL 0x0072d7f0
0058D809  8B F0                     MOV ESI,EAX
0058D80B  83 C4 08                  ADD ESP,0x8
0058D80E  3B F7                     CMP ESI,EDI
0058D810  0F 85 FD 08 00 00         JNZ 0x0058e113
0058D816  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0058D819  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
0058D81C  56                        PUSH ESI
0058D81D  8B CB                     MOV ECX,EBX
0058D81F  E8 E3 76 E7 FF            CALL 0x00404f07
0058D824  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0058D827  3D 10 01 00 00            CMP EAX,0x110
0058D82C  0F 87 03 07 00 00         JA 0x0058df35
0058D832  0F 84 8B 06 00 00         JZ 0x0058dec3
0058D838  83 F8 03                  CMP EAX,0x3
0058D83B  0F 87 FB 04 00 00         JA 0x0058dd3c
0058D841  0F 84 9E 04 00 00         JZ 0x0058dce5
0058D847  2B C7                     SUB EAX,EDI
0058D849  0F 84 7C 04 00 00         JZ 0x0058dccb
0058D84F  83 E8 02                  SUB EAX,0x2
0058D852  0F 85 A8 08 00 00         JNZ 0x0058e100
0058D858  C7 83 57 02 00 00 08 00 00 00  MOV dword ptr [EBX + 0x257],0x8
0058D862  89 BB 3D 02 00 00         MOV dword ptr [EBX + 0x23d],EDI
0058D868  89 BB 41 02 00 00         MOV dword ptr [EBX + 0x241],EDI
0058D86E  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0058D871  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0058D874  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0058D877  83 F9 01                  CMP ECX,0x1
0058D87A  0F 86 50 01 00 00         JBE 0x0058d9d0
0058D880  83 F9 02                  CMP ECX,0x2
0058D883  0F 85 1F 04 00 00         JNZ 0x0058dca8
0058D889  8D BB 5B 02 00 00         LEA EDI,[EBX + 0x25b]
0058D88F  B9 0D 00 00 00            MOV ECX,0xd
0058D894  8B F0                     MOV ESI,EAX
0058D896  F3 A5                     MOVSD.REP ES:EDI,ESI
0058D898  8B 48 5E                  MOV ECX,dword ptr [EAX + 0x5e]
0058D89B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0058D89E  8D 4C 01 66               LEA ECX,[ECX + EAX*0x1 + 0x66]
0058D8A2  51                        PUSH ECX
0058D8A3  8B CB                     MOV ECX,EBX
0058D8A5  E8 75 7C E7 FF            CALL 0x0040551f
0058D8AA  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
0058D8AD  6A 44                     PUSH 0x44
0058D8AF  66 8B 56 34               MOV DX,word ptr [ESI + 0x34]
0058D8B3  66 89 93 31 02 00 00      MOV word ptr [EBX + 0x231],DX
0058D8BA  66 8B 46 36               MOV AX,word ptr [ESI + 0x36]
0058D8BE  66 89 83 33 02 00 00      MOV word ptr [EBX + 0x233],AX
0058D8C5  66 8B 4E 38               MOV CX,word ptr [ESI + 0x38]
0058D8C9  66 89 8B 35 02 00 00      MOV word ptr [EBX + 0x235],CX
0058D8D0  66 8B 56 3A               MOV DX,word ptr [ESI + 0x3a]
0058D8D4  66 89 93 37 02 00 00      MOV word ptr [EBX + 0x237],DX
0058D8DB  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
0058D8DE  89 83 49 02 00 00         MOV dword ptr [EBX + 0x249],EAX
0058D8E4  66 8B 4E 40               MOV CX,word ptr [ESI + 0x40]
0058D8E8  66 89 8B 4D 02 00 00      MOV word ptr [EBX + 0x24d],CX
0058D8EF  8B 56 42                  MOV EDX,dword ptr [ESI + 0x42]
0058D8F2  89 93 3D 02 00 00         MOV dword ptr [EBX + 0x23d],EDX
0058D8F8  8B 46 46                  MOV EAX,dword ptr [ESI + 0x46]
0058D8FB  89 83 4F 02 00 00         MOV dword ptr [EBX + 0x24f],EAX
0058D901  8B 4E 4A                  MOV ECX,dword ptr [ESI + 0x4a]
0058D904  89 8B 53 02 00 00         MOV dword ptr [EBX + 0x253],ECX
0058D90A  8B 56 4E                  MOV EDX,dword ptr [ESI + 0x4e]
0058D90D  89 93 57 02 00 00         MOV dword ptr [EBX + 0x257],EDX
0058D913  8B 46 52                  MOV EAX,dword ptr [ESI + 0x52]
0058D916  89 83 41 02 00 00         MOV dword ptr [EBX + 0x241],EAX
0058D91C  8B 4E 56                  MOV ECX,dword ptr [ESI + 0x56]
0058D91F  89 8B 45 02 00 00         MOV dword ptr [EBX + 0x245],ECX
0058D925  E8 46 D3 11 00            CALL 0x006aac70
0058D92A  33 D2                     XOR EDX,EDX
0058D92C  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0058D92F  3B C2                     CMP EAX,EDX
0058D931  0F 84 71 03 00 00         JZ 0x0058dca8
0058D937  33 C9                     XOR ECX,ECX
0058D939  EB 03                     JMP 0x0058d93e
LAB_0058d93b:
0058D93B  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
LAB_0058d93e:
0058D93E  8B 3D 6C 67 80 00         MOV EDI,dword ptr [0x0080676c]
0058D944  89 3C 01                  MOV dword ptr [ECX + EAX*0x1],EDI
0058D947  83 C1 04                  ADD ECX,0x4
0058D94A  83 F9 44                  CMP ECX,0x44
0058D94D  7C EC                     JL 0x0058d93b
0058D94F  8B 8B 41 02 00 00         MOV ECX,dword ptr [EBX + 0x241]
0058D955  A1 24 67 80 00            MOV EAX,[0x00806724]
0058D95A  3B CA                     CMP ECX,EDX
0058D95C  7E 14                     JLE 0x0058d972
0058D95E  3B C2                     CMP EAX,EDX
0058D960  74 10                     JZ 0x0058d972
0058D962  8D 78 30                  LEA EDI,[EAX + 0x30]
0058D965  85 FF                     TEST EDI,EDI
0058D967  74 09                     JZ 0x0058d972
0058D969  8B 4C 88 2C               MOV ECX,dword ptr [EAX + ECX*0x4 + 0x2c]
0058D96D  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
0058D970  EB 03                     JMP 0x0058d975
LAB_0058d972:
0058D972  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
LAB_0058d975:
0058D975  0F BF 40 2C               MOVSX EAX,word ptr [EAX + 0x2c]
0058D979  8B 0D CC 73 80 00         MOV ECX,dword ptr [0x008073cc]
0058D97F  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0058D982  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0058D985  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0058D988  83 C6 62                  ADD ESI,0x62
0058D98B  8D 55 C8                  LEA EDX,[EBP + -0x38]
0058D98E  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
0058D991  56                        PUSH ESI
0058D992  52                        PUSH EDX
0058D993  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0058D999  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0058D99C  E8 04 73 E7 FF            CALL 0x00404ca5
0058D9A1  8D 45 C8                  LEA EAX,[EBP + -0x38]
0058D9A4  50                        PUSH EAX
0058D9A5  E8 B6 D6 11 00            CALL 0x006ab060
0058D9AA  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
0058D9AD  66 8B 53 5F               MOV DX,word ptr [EBX + 0x5f]
0058D9B1  66 8B 43 5D               MOV AX,word ptr [EBX + 0x5d]
0058D9B5  51                        PUSH ECX
0058D9B6  66 8B 4B 5B               MOV CX,word ptr [EBX + 0x5b]
0058D9BA  53                        PUSH EBX
0058D9BB  6A 01                     PUSH 0x1
0058D9BD  52                        PUSH EDX
0058D9BE  50                        PUSH EAX
0058D9BF  51                        PUSH ECX
0058D9C0  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0058D9C6  E8 5A 39 E7 FF            CALL 0x00401325
0058D9CB  E9 D8 02 00 00            JMP 0x0058dca8
LAB_0058d9d0:
0058D9D0  8B CB                     MOV ECX,EBX
0058D9D2  89 BB 4F 02 00 00         MOV dword ptr [EBX + 0x24f],EDI
0058D9D8  89 BB 53 02 00 00         MOV dword ptr [EBX + 0x253],EDI
0058D9DE  C7 83 49 02 00 00 FF 00 00 00  MOV dword ptr [EBX + 0x249],0xff
0058D9E8  E8 0D 7D E7 FF            CALL 0x004056fa
0058D9ED  89 83 4F 02 00 00         MOV dword ptr [EBX + 0x24f],EAX
0058D9F3  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
0058D9F6  B9 0D 00 00 00            MOV ECX,0xd
0058D9FB  8D BB 5B 02 00 00         LEA EDI,[EBX + 0x25b]
0058DA01  F3 A5                     MOVSD.REP ES:EDI,ESI
0058DA03  8B CB                     MOV ECX,EBX
0058DA05  E8 84 7A E7 FF            CALL 0x0040548e
0058DA0A  83 CF FF                  OR EDI,0xffffffff
0058DA0D  6A 01                     PUSH 0x1
0058DA0F  8B CB                     MOV ECX,EBX
0058DA11  66 89 7B 5B               MOV word ptr [EBX + 0x5b],DI
0058DA15  66 89 7B 5D               MOV word ptr [EBX + 0x5d],DI
0058DA19  66 89 7B 5F               MOV word ptr [EBX + 0x5f],DI
0058DA1D  E8 3B 51 E7 FF            CALL 0x00402b5d
0058DA22  66 8B 93 77 02 00 00      MOV DX,word ptr [EBX + 0x277]
0058DA29  66 8B 83 73 02 00 00      MOV AX,word ptr [EBX + 0x273]
0058DA30  66 8B 8B 6F 02 00 00      MOV CX,word ptr [EBX + 0x26f]
0058DA37  6A 01                     PUSH 0x1
0058DA39  52                        PUSH EDX
0058DA3A  50                        PUSH EAX
0058DA3B  51                        PUSH ECX
0058DA3C  8B CB                     MOV ECX,EBX
0058DA3E  E8 1C 4F E7 FF            CALL 0x0040295f
0058DA43  85 C0                     TEST EAX,EAX
0058DA45  74 0C                     JZ 0x0058da53
0058DA47  8B CB                     MOV ECX,EBX
0058DA49  E8 2C 48 E7 FF            CALL 0x0040227a
0058DA4E  E9 55 02 00 00            JMP 0x0058dca8
LAB_0058da53:
0058DA53  6A 08                     PUSH 0x8
0058DA55  8B CB                     MOV ECX,EBX
0058DA57  E8 4E 40 E7 FF            CALL 0x00401aaa
0058DA5C  85 C0                     TEST EAX,EAX
0058DA5E  74 31                     JZ 0x0058da91
0058DA60  68 A0 BB 7C 00            PUSH 0x7cbba0
0058DA65  68 CC 4C 7A 00            PUSH 0x7a4ccc
0058DA6A  6A 00                     PUSH 0x0
0058DA6C  6A 00                     PUSH 0x0
0058DA6E  68 99 00 00 00            PUSH 0x99
0058DA73  68 7C BB 7C 00            PUSH 0x7cbb7c
0058DA78  E8 53 FA 11 00            CALL 0x006ad4d0
0058DA7D  83 C4 18                  ADD ESP,0x18
0058DA80  85 C0                     TEST EAX,EAX
0058DA82  74 01                     JZ 0x0058da85
0058DA84  CC                        INT3
LAB_0058da85:
0058DA85  8B CB                     MOV ECX,EBX
0058DA87  E8 EE 47 E7 FF            CALL 0x0040227a
0058DA8C  E9 17 02 00 00            JMP 0x0058dca8
LAB_0058da91:
0058DA91  8B 15 6C 67 80 00         MOV EDX,dword ptr [0x0080676c]
0058DA97  6A 1D                     PUSH 0x1d
0058DA99  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
0058DA9F  68 20 BB 7C 00            PUSH 0x7cbb20
0058DAA4  52                        PUSH EDX
0058DAA5  6A 0E                     PUSH 0xe
0058DAA7  8B CE                     MOV ECX,ESI
0058DAA9  E8 D5 66 E7 FF            CALL 0x00404183
0058DAAE  85 C0                     TEST EAX,EAX
0058DAB0  74 16                     JZ 0x0058dac8
0058DAB2  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0058DAB7  68 9F 00 00 00            PUSH 0x9f
0058DABC  68 7C BB 7C 00            PUSH 0x7cbb7c
0058DAC1  50                        PUSH EAX
0058DAC2  57                        PUSH EDI
0058DAC3  E8 78 83 11 00            CALL 0x006a5e40
LAB_0058dac8:
0058DAC8  6A 0E                     PUSH 0xe
0058DACA  8B CE                     MOV ECX,ESI
0058DACC  E8 D5 7F E7 FF            CALL 0x00405aa6
0058DAD1  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0058DAD7  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0058DADD  8B CE                     MOV ECX,ESI
0058DADF  52                        PUSH EDX
0058DAE0  6A 0E                     PUSH 0xe
0058DAE2  E8 59 77 E7 FF            CALL 0x00405240
0058DAE7  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0058DAEA  33 FF                     XOR EDI,EDI
0058DAEC  39 78 0C                  CMP dword ptr [EAX + 0xc],EDI
0058DAEF  0F 85 8F 00 00 00         JNZ 0x0058db84
0058DAF5  DB 83 77 02 00 00         FILD dword ptr [EBX + 0x277]
0058DAFB  51                        PUSH ECX
0058DAFC  D8 0D 04 05 79 00         FMUL float ptr [0x00790504]
0058DB02  D8 05 00 05 79 00         FADD float ptr [0x00790500]
0058DB08  D9 1C 24                  FSTP float ptr [ESP]
0058DB0B  DB 83 73 02 00 00         FILD dword ptr [EBX + 0x273]
0058DB11  51                        PUSH ECX
0058DB12  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0058DB18  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0058DB1E  D9 1C 24                  FSTP float ptr [ESP]
0058DB21  DB 83 6F 02 00 00         FILD dword ptr [EBX + 0x26f]
0058DB27  51                        PUSH ECX
0058DB28  8B CE                     MOV ECX,ESI
0058DB2A  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0058DB30  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0058DB36  D9 1C 24                  FSTP float ptr [ESP]
0058DB39  E8 9B 6A E7 FF            CALL 0x004045d9
0058DB3E  66 8B 8B 7B 02 00 00      MOV CX,word ptr [EBX + 0x27b]
0058DB45  51                        PUSH ECX
0058DB46  8B CB                     MOV ECX,EBX
0058DB48  E8 74 82 E7 FF            CALL 0x00405dc1
0058DB4D  85 C0                     TEST EAX,EAX
0058DB4F  0F 84 1D 01 00 00         JZ 0x0058dc72
0058DB55  68 50 BB 7C 00            PUSH 0x7cbb50
0058DB5A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0058DB5F  57                        PUSH EDI
0058DB60  57                        PUSH EDI
0058DB61  68 AA 00 00 00            PUSH 0xaa
0058DB66  68 7C BB 7C 00            PUSH 0x7cbb7c
0058DB6B  E8 60 F9 11 00            CALL 0x006ad4d0
0058DB70  83 C4 18                  ADD ESP,0x18
0058DB73  85 C0                     TEST EAX,EAX
0058DB75  74 01                     JZ 0x0058db78
0058DB77  CC                        INT3
LAB_0058db78:
0058DB78  8B CB                     MOV ECX,EBX
0058DB7A  E8 FB 46 E7 FF            CALL 0x0040227a
0058DB7F  E9 24 01 00 00            JMP 0x0058dca8
LAB_0058db84:
0058DB84  8B 15 24 67 80 00         MOV EDX,dword ptr [0x00806724]
0058DB8A  8B 8B 6F 02 00 00         MOV ECX,dword ptr [EBX + 0x26f]
0058DB90  3B CF                     CMP ECX,EDI
0058DB92  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0058DB95  0F BF 42 23               MOVSX EAX,word ptr [EDX + 0x23]
0058DB99  89 83 41 02 00 00         MOV dword ptr [EBX + 0x241],EAX
0058DB9F  75 08                     JNZ 0x0058dba9
0058DBA1  89 BB 7B 02 00 00         MOV dword ptr [EBX + 0x27b],EDI
0058DBA7  EB 44                     JMP 0x0058dbed
LAB_0058dba9:
0058DBA9  8B 83 73 02 00 00         MOV EAX,dword ptr [EBX + 0x273]
0058DBAF  3B C7                     CMP EAX,EDI
0058DBB1  75 0C                     JNZ 0x0058dbbf
0058DBB3  C7 83 7B 02 00 00 0E 01 00 00  MOV dword ptr [EBX + 0x27b],0x10e
0058DBBD  EB 2E                     JMP 0x0058dbed
LAB_0058dbbf:
0058DBBF  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
0058DBC6  4A                        DEC EDX
0058DBC7  3B CA                     CMP ECX,EDX
0058DBC9  75 0C                     JNZ 0x0058dbd7
0058DBCB  C7 83 7B 02 00 00 B4 00 00 00  MOV dword ptr [EBX + 0x27b],0xb4
0058DBD5  EB 16                     JMP 0x0058dbed
LAB_0058dbd7:
0058DBD7  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
0058DBDE  49                        DEC ECX
0058DBDF  3B C1                     CMP EAX,ECX
0058DBE1  75 0A                     JNZ 0x0058dbed
0058DBE3  C7 83 7B 02 00 00 5A 00 00 00  MOV dword ptr [EBX + 0x27b],0x5a
LAB_0058dbed:
0058DBED  DB 83 77 02 00 00         FILD dword ptr [EBX + 0x277]
0058DBF3  51                        PUSH ECX
0058DBF4  D8 0D 04 05 79 00         FMUL float ptr [0x00790504]
0058DBFA  D8 05 00 05 79 00         FADD float ptr [0x00790500]
0058DC00  D9 1C 24                  FSTP float ptr [ESP]
0058DC03  DB 83 73 02 00 00         FILD dword ptr [EBX + 0x273]
0058DC09  51                        PUSH ECX
0058DC0A  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0058DC10  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0058DC16  D9 1C 24                  FSTP float ptr [ESP]
0058DC19  DB 45 E8                  FILD dword ptr [EBP + -0x18]
0058DC1C  51                        PUSH ECX
0058DC1D  8B CE                     MOV ECX,ESI
0058DC1F  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0058DC25  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0058DC2B  D9 1C 24                  FSTP float ptr [ESP]
0058DC2E  E8 A6 69 E7 FF            CALL 0x004045d9
0058DC33  66 8B 93 7B 02 00 00      MOV DX,word ptr [EBX + 0x27b]
0058DC3A  8B CB                     MOV ECX,EBX
0058DC3C  52                        PUSH EDX
0058DC3D  E8 7F 81 E7 FF            CALL 0x00405dc1
0058DC42  85 C0                     TEST EAX,EAX
0058DC44  74 2C                     JZ 0x0058dc72
0058DC46  68 50 BB 7C 00            PUSH 0x7cbb50
0058DC4B  68 CC 4C 7A 00            PUSH 0x7a4ccc
0058DC50  57                        PUSH EDI
0058DC51  57                        PUSH EDI
0058DC52  68 C8 00 00 00            PUSH 0xc8
0058DC57  68 7C BB 7C 00            PUSH 0x7cbb7c
0058DC5C  E8 6F F8 11 00            CALL 0x006ad4d0
0058DC61  83 C4 18                  ADD ESP,0x18
0058DC64  85 C0                     TEST EAX,EAX
0058DC66  74 01                     JZ 0x0058dc69
0058DC68  CC                        INT3
LAB_0058dc69:
0058DC69  8B CB                     MOV ECX,EBX
0058DC6B  E8 0A 46 E7 FF            CALL 0x0040227a
0058DC70  EB 36                     JMP 0x0058dca8
LAB_0058dc72:
0058DC72  A1 24 67 80 00            MOV EAX,[0x00806724]
0058DC77  66 8B 53 47               MOV DX,word ptr [EBX + 0x47]
0058DC7B  0F BF 48 2C               MOVSX ECX,word ptr [EAX + 0x2c]
0058DC7F  66 8B 43 49               MOV AX,word ptr [EBX + 0x49]
0058DC83  89 8B 45 02 00 00         MOV dword ptr [EBX + 0x245],ECX
0058DC89  66 8B 4B 4B               MOV CX,word ptr [EBX + 0x4b]
0058DC8D  66 89 93 31 02 00 00      MOV word ptr [EBX + 0x231],DX
0058DC94  66 89 83 33 02 00 00      MOV word ptr [EBX + 0x233],AX
0058DC9B  66 89 8B 35 02 00 00      MOV word ptr [EBX + 0x235],CX
0058DCA2  89 BB 57 02 00 00         MOV dword ptr [EBX + 0x257],EDI
LAB_0058dca8:
0058DCA8  83 BB 57 02 00 00 08      CMP dword ptr [EBX + 0x257],0x8
0058DCAF  0F 84 4B 04 00 00         JZ 0x0058e100
0058DCB5  53                        PUSH EBX
0058DCB6  E8 08 34 E7 FF            CALL 0x004010c3
0058DCBB  83 C4 04                  ADD ESP,0x4
0058DCBE  85 C0                     TEST EAX,EAX
0058DCC0  0F 85 3A 04 00 00         JNZ 0x0058e100
0058DCC6  E9 2E 04 00 00            JMP 0x0058e0f9
LAB_0058dccb:
0058DCCB  8B CB                     MOV ECX,EBX
0058DCCD  E8 29 42 E7 FF            CALL 0x00401efb
0058DCD2  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0058DCD5  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058DCDA  33 C0                     XOR EAX,EAX
0058DCDC  5F                        POP EDI
0058DCDD  5E                        POP ESI
0058DCDE  5B                        POP EBX
0058DCDF  8B E5                     MOV ESP,EBP
0058DCE1  5D                        POP EBP
0058DCE2  C2 04 00                  RET 0x4
LAB_0058dce5:
0058DCE5  8B CB                     MOV ECX,EBX
0058DCE7  E8 66 7C E7 FF            CALL 0x00405952
0058DCEC  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
0058DCEF  8A 83 8E 00 00 00         MOV AL,byte ptr [EBX + 0x8e]
0058DCF5  66 8B 4B 5F               MOV CX,word ptr [EBX + 0x5f]
0058DCF9  52                        PUSH EDX
0058DCFA  66 8B 53 5D               MOV DX,word ptr [EBX + 0x5d]
0058DCFE  53                        PUSH EBX
0058DCFF  50                        PUSH EAX
0058DD00  66 8B 43 5B               MOV AX,word ptr [EBX + 0x5b]
0058DD04  51                        PUSH ECX
0058DD05  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0058DD0B  52                        PUSH EDX
0058DD0C  50                        PUSH EAX
0058DD0D  E8 AF 71 E7 FF            CALL 0x00404ec1
0058DD12  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
0058DD15  51                        PUSH ECX
0058DD16  E8 6E 54 E7 FF            CALL 0x00403189
0058DD1B  83 C4 04                  ADD ESP,0x4
0058DD1E  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0058DD24  E8 AC 44 E7 FF            CALL 0x004021d5
0058DD29  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0058DD2C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058DD31  33 C0                     XOR EAX,EAX
0058DD33  5F                        POP EDI
0058DD34  5E                        POP ESI
0058DD35  5B                        POP EBX
0058DD36  8B E5                     MOV ESP,EBP
0058DD38  5D                        POP EBP
0058DD39  C2 04 00                  RET 0x4
LAB_0058dd3c:
0058DD3C  3D 0F 01 00 00            CMP EAX,0x10f
0058DD41  0F 85 B9 03 00 00         JNZ 0x0058e100
0058DD47  8D 55 FC                  LEA EDX,[EBP + -0x4]
0058DD4A  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0058DD50  52                        PUSH EDX
0058DD51  E8 7E 3B E7 FF            CALL 0x004018d4
0058DD56  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0058DD59  8D 45 F4                  LEA EAX,[EBP + -0xc]
0058DD5C  50                        PUSH EAX
0058DD5D  8B CB                     MOV ECX,EBX
0058DD5F  E8 36 34 E7 FF            CALL 0x0040119a
0058DD64  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0058DD67  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0058DD6A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0058DD6D  8D 44 0A 66               LEA EAX,[EDX + ECX*0x1 + 0x66]
0058DD71  50                        PUSH EAX
0058DD72  E8 F9 CE 11 00            CALL 0x006aac70
0058DD77  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0058DD7A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0058DD7D  3B CF                     CMP ECX,EDI
0058DD7F  0F 84 7B 03 00 00         JZ 0x0058e100
0058DD85  39 7D F0                  CMP dword ptr [EBP + -0x10],EDI
0058DD88  0F 84 72 03 00 00         JZ 0x0058e100
0058DD8E  3B C7                     CMP EAX,EDI
0058DD90  0F 84 6A 03 00 00         JZ 0x0058e100
0058DD96  8D B3 5B 02 00 00         LEA ESI,[EBX + 0x25b]
0058DD9C  B9 0D 00 00 00            MOV ECX,0xd
0058DDA1  8B F8                     MOV EDI,EAX
0058DDA3  F3 A5                     MOVSD.REP ES:EDI,ESI
0058DDA5  C7 40 0C 02 00 00 00      MOV dword ptr [EAX + 0xc],0x2
0058DDAC  66 8B 8B 31 02 00 00      MOV CX,word ptr [EBX + 0x231]
0058DDB3  66 89 48 34               MOV word ptr [EAX + 0x34],CX
0058DDB7  66 8B 93 33 02 00 00      MOV DX,word ptr [EBX + 0x233]
0058DDBE  66 89 50 36               MOV word ptr [EAX + 0x36],DX
0058DDC2  66 8B 8B 35 02 00 00      MOV CX,word ptr [EBX + 0x235]
0058DDC9  66 89 48 38               MOV word ptr [EAX + 0x38],CX
0058DDCD  66 8B 93 37 02 00 00      MOV DX,word ptr [EBX + 0x237]
0058DDD4  66 89 50 3A               MOV word ptr [EAX + 0x3a],DX
0058DDD8  8B 8B 49 02 00 00         MOV ECX,dword ptr [EBX + 0x249]
0058DDDE  89 48 3C                  MOV dword ptr [EAX + 0x3c],ECX
0058DDE1  66 8B 93 4D 02 00 00      MOV DX,word ptr [EBX + 0x24d]
0058DDE8  66 89 50 40               MOV word ptr [EAX + 0x40],DX
0058DDEC  8B 8B 3D 02 00 00         MOV ECX,dword ptr [EBX + 0x23d]
0058DDF2  89 48 42                  MOV dword ptr [EAX + 0x42],ECX
0058DDF5  8B 93 4F 02 00 00         MOV EDX,dword ptr [EBX + 0x24f]
0058DDFB  89 50 46                  MOV dword ptr [EAX + 0x46],EDX
0058DDFE  8B 8B 53 02 00 00         MOV ECX,dword ptr [EBX + 0x253]
0058DE04  89 48 4A                  MOV dword ptr [EAX + 0x4a],ECX
0058DE07  8B 93 57 02 00 00         MOV EDX,dword ptr [EBX + 0x257]
0058DE0D  89 50 4E                  MOV dword ptr [EAX + 0x4e],EDX
0058DE10  8B 8B 41 02 00 00         MOV ECX,dword ptr [EBX + 0x241]
0058DE16  89 48 52                  MOV dword ptr [EAX + 0x52],ECX
0058DE19  8B 93 45 02 00 00         MOV EDX,dword ptr [EBX + 0x245]
0058DE1F  89 50 56                  MOV dword ptr [EAX + 0x56],EDX
0058DE22  C7 40 5A 00 00 00 00      MOV dword ptr [EAX + 0x5a],0x0
0058DE29  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0058DE2C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058DE2F  89 41 5E                  MOV dword ptr [ECX + 0x5e],EAX
0058DE32  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0058DE35  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0058DE38  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0058DE3B  8B C1                     MOV EAX,ECX
0058DE3D  8D 7A 62                  LEA EDI,[EDX + 0x62]
0058DE40  C1 E9 02                  SHR ECX,0x2
0058DE43  F3 A5                     MOVSD.REP ES:EDI,ESI
0058DE45  8B C8                     MOV ECX,EAX
0058DE47  83 E1 03                  AND ECX,0x3
0058DE4A  F3 A4                     MOVSB.REP ES:EDI,ESI
0058DE4C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0058DE4F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058DE52  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0058DE55  89 4C 02 62               MOV dword ptr [EDX + EAX*0x1 + 0x62],ECX
0058DE59  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0058DE5C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058DE5F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0058DE62  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0058DE65  8D 7C 02 66               LEA EDI,[EDX + EAX*0x1 + 0x66]
0058DE69  8B D1                     MOV EDX,ECX
0058DE6B  C1 E9 02                  SHR ECX,0x2
0058DE6E  F3 A5                     MOVSD.REP ES:EDI,ESI
0058DE70  8B CA                     MOV ECX,EDX
0058DE72  83 E1 03                  AND ECX,0x3
0058DE75  F3 A4                     MOVSB.REP ES:EDI,ESI
0058DE77  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058DE7A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0058DE7D  8D 54 01 66               LEA EDX,[ECX + EAX*0x1 + 0x66]
0058DE81  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0058DE84  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
0058DE87  52                        PUSH EDX
0058DE88  50                        PUSH EAX
0058DE89  51                        PUSH ECX
0058DE8A  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0058DE90  E8 64 47 E7 FF            CALL 0x004025f9
0058DE95  8D 55 EC                  LEA EDX,[EBP + -0x14]
0058DE98  52                        PUSH EDX
0058DE99  E8 C2 D1 11 00            CALL 0x006ab060
0058DE9E  8D 45 F0                  LEA EAX,[EBP + -0x10]
0058DEA1  50                        PUSH EAX
0058DEA2  E8 B9 D1 11 00            CALL 0x006ab060
0058DEA7  8D 4D F8                  LEA ECX,[EBP + -0x8]
0058DEAA  51                        PUSH ECX
0058DEAB  E8 B0 D1 11 00            CALL 0x006ab060
0058DEB0  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0058DEB3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058DEB8  33 C0                     XOR EAX,EAX
0058DEBA  5F                        POP EDI
0058DEBB  5E                        POP ESI
0058DEBC  5B                        POP EBX
0058DEBD  8B E5                     MOV ESP,EBP
0058DEBF  5D                        POP EBP
0058DEC0  C2 04 00                  RET 0x4
LAB_0058dec3:
0058DEC3  83 BB 57 02 00 00 04      CMP dword ptr [EBX + 0x257],0x4
0058DECA  0F 84 30 02 00 00         JZ 0x0058e100
0058DED0  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
0058DED6  6A 0E                     PUSH 0xe
0058DED8  8B CE                     MOV ECX,ESI
0058DEDA  89 BB 3D 02 00 00         MOV dword ptr [EBX + 0x23d],EDI
0058DEE0  E8 7F 63 E7 FF            CALL 0x00404264
0058DEE5  8B CE                     MOV ECX,ESI
0058DEE7  E8 A4 4B E7 FF            CALL 0x00402a90
0058DEEC  8B 15 64 67 80 00         MOV EDX,dword ptr [0x00806764]
0058DEF2  6A 1D                     PUSH 0x1d
0058DEF4  68 28 BB 7C 00            PUSH 0x7cbb28
0058DEF9  52                        PUSH EDX
0058DEFA  6A 08                     PUSH 0x8
0058DEFC  8B CE                     MOV ECX,ESI
0058DEFE  E8 80 62 E7 FF            CALL 0x00404183
0058DF03  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0058DF08  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
0058DF0E  51                        PUSH ECX
0058DF0F  6A 08                     PUSH 0x8
0058DF11  8B CE                     MOV ECX,ESI
0058DF13  E8 28 73 E7 FF            CALL 0x00405240
0058DF18  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0058DF1B  C7 83 57 02 00 00 04 00 00 00  MOV dword ptr [EBX + 0x257],0x4
0058DF25  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058DF2A  33 C0                     XOR EAX,EAX
0058DF2C  5F                        POP EDI
0058DF2D  5E                        POP ESI
0058DF2E  5B                        POP EBX
0058DF2F  8B E5                     MOV ESP,EBP
0058DF31  5D                        POP EBP
0058DF32  C2 04 00                  RET 0x4
LAB_0058df35:
0058DF35  05 EE FE FF FF            ADD EAX,0xfffffeee
0058DF3A  83 F8 16                  CMP EAX,0x16
0058DF3D  0F 87 BD 01 00 00         JA 0x0058e100
0058DF43  33 D2                     XOR EDX,EDX
0058DF45  8A 90 74 E1 58 00         MOV DL,byte ptr [EAX + 0x58e174]
switchD_0058df4b::switchD:
0058DF4B  FF 24 95 60 E1 58 00      JMP dword ptr [EDX*0x4 + 0x58e160]
switchD_0058df4b::caseD_127:
0058DF52  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0058DF55  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0058DF58  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0058DF5B  8D 54 C8 64               LEA EDX,[EAX + ECX*0x8 + 0x64]
0058DF5F  C1 E8 10                  SHR EAX,0x10
0058DF62  0F BF D2                  MOVSX EDX,DX
0058DF65  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0058DF68  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0058DF6B  8D 44 C8 64               LEA EAX,[EAX + ECX*0x8 + 0x64]
0058DF6F  0F BF F8                  MOVSX EDI,AX
0058DF72  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0058DF75  8D B3 31 02 00 00         LEA ESI,[EBX + 0x231]
0058DF7B  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0058DF7E  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0058DF81  8D 4C C8 64               LEA ECX,[EAX + ECX*0x8 + 0x64]
0058DF85  0F BF C9                  MOVSX ECX,CX
0058DF88  C1 E8 10                  SHR EAX,0x10
0058DF8B  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0058DF8E  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0058DF91  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0058DF94  8D 44 C8 64               LEA EAX,[EAX + ECX*0x8 + 0x64]
0058DF98  8D 8B 35 02 00 00         LEA ECX,[EBX + 0x235]
0058DF9E  51                        PUSH ECX
0058DF9F  8D 8B 33 02 00 00         LEA ECX,[EBX + 0x233]
0058DFA5  0F BF C0                  MOVSX EAX,AX
0058DFA8  51                        PUSH ECX
0058DFA9  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0058DFAC  56                        PUSH ESI
0058DFAD  50                        PUSH EAX
0058DFAE  8B 83 87 02 00 00         MOV EAX,dword ptr [EBX + 0x287]
0058DFB4  57                        PUSH EDI
0058DFB5  51                        PUSH ECX
0058DFB6  8B 8B 83 02 00 00         MOV ECX,dword ptr [EBX + 0x283]
0058DFBC  52                        PUSH EDX
0058DFBD  8B 93 8B 02 00 00         MOV EDX,dword ptr [EBX + 0x28b]
0058DFC3  53                        PUSH EBX
0058DFC4  52                        PUSH EDX
0058DFC5  8B 93 7F 02 00 00         MOV EDX,dword ptr [EBX + 0x27f]
0058DFCB  50                        PUSH EAX
0058DFCC  51                        PUSH ECX
0058DFCD  52                        PUSH EDX
0058DFCE  E8 14 3A E7 FF            CALL 0x004019e7
0058DFD3  83 C4 30                  ADD ESP,0x30
0058DFD6  85 C0                     TEST EAX,EAX
0058DFD8  0F 84 22 01 00 00         JZ 0x0058e100
0058DFDE  66 8B 06                  MOV AX,word ptr [ESI]
0058DFE1  66 85 C0                  TEST AX,AX
0058DFE4  0F BF C8                  MOVSX ECX,AX
0058DFE7  B8 79 19 8C 02            MOV EAX,0x28c1979
0058DFEC  7C 10                     JL 0x0058dffe
0058DFEE  F7 E9                     IMUL ECX
0058DFF0  D1 FA                     SAR EDX,0x1
0058DFF2  8B C2                     MOV EAX,EDX
0058DFF4  C1 E8 1F                  SHR EAX,0x1f
0058DFF7  03 D0                     ADD EDX,EAX
0058DFF9  0F BF C2                  MOVSX EAX,DX
0058DFFC  EB 0F                     JMP 0x0058e00d
LAB_0058dffe:
0058DFFE  F7 E9                     IMUL ECX
0058E000  D1 FA                     SAR EDX,0x1
0058E002  8B CA                     MOV ECX,EDX
0058E004  C1 E9 1F                  SHR ECX,0x1f
0058E007  03 D1                     ADD EDX,ECX
0058E009  0F BF C2                  MOVSX EAX,DX
0058E00C  48                        DEC EAX
LAB_0058e00d:
0058E00D  66 89 06                  MOV word ptr [ESI],AX
0058E010  66 8B 83 33 02 00 00      MOV AX,word ptr [EBX + 0x233]
0058E017  66 85 C0                  TEST AX,AX
0058E01A  0F BF C8                  MOVSX ECX,AX
0058E01D  B8 79 19 8C 02            MOV EAX,0x28c1979
0058E022  7C 10                     JL 0x0058e034
0058E024  F7 E9                     IMUL ECX
0058E026  D1 FA                     SAR EDX,0x1
0058E028  8B C2                     MOV EAX,EDX
0058E02A  C1 E8 1F                  SHR EAX,0x1f
0058E02D  03 D0                     ADD EDX,EAX
0058E02F  0F BF C2                  MOVSX EAX,DX
0058E032  EB 0F                     JMP 0x0058e043
LAB_0058e034:
0058E034  F7 E9                     IMUL ECX
0058E036  D1 FA                     SAR EDX,0x1
0058E038  8B CA                     MOV ECX,EDX
0058E03A  C1 E9 1F                  SHR ECX,0x1f
0058E03D  03 D1                     ADD EDX,ECX
0058E03F  0F BF C2                  MOVSX EAX,DX
0058E042  48                        DEC EAX
LAB_0058e043:
0058E043  66 89 83 33 02 00 00      MOV word ptr [EBX + 0x233],AX
0058E04A  66 8B 83 35 02 00 00      MOV AX,word ptr [EBX + 0x235]
0058E051  66 85 C0                  TEST AX,AX
0058E054  0F BF C8                  MOVSX ECX,AX
0058E057  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0058E05C  7C 11                     JL 0x0058e06f
0058E05E  F7 E9                     IMUL ECX
0058E060  C1 FA 06                  SAR EDX,0x6
0058E063  8B C2                     MOV EAX,EDX
0058E065  C1 E8 1F                  SHR EAX,0x1f
0058E068  03 D0                     ADD EDX,EAX
0058E06A  0F BF C2                  MOVSX EAX,DX
0058E06D  EB 10                     JMP 0x0058e07f
LAB_0058e06f:
0058E06F  F7 E9                     IMUL ECX
0058E071  C1 FA 06                  SAR EDX,0x6
0058E074  8B CA                     MOV ECX,EDX
0058E076  C1 E9 1F                  SHR ECX,0x1f
0058E079  03 D1                     ADD EDX,ECX
0058E07B  0F BF C2                  MOVSX EAX,DX
0058E07E  48                        DEC EAX
LAB_0058e07f:
0058E07F  66 89 83 35 02 00 00      MOV word ptr [EBX + 0x235],AX
0058E086  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0058E089  C7 83 57 02 00 00 05 00 00 00  MOV dword ptr [EBX + 0x257],0x5
0058E093  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058E098  33 C0                     XOR EAX,EAX
0058E09A  5F                        POP EDI
0058E09B  5E                        POP ESI
0058E09C  5B                        POP EBX
0058E09D  8B E5                     MOV ESP,EBP
0058E09F  5D                        POP EBP
0058E0A0  C2 04 00                  RET 0x4
switchD_0058df4b::caseD_112:
0058E0A3  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0058E0A9  E8 E2 49 E7 FF            CALL 0x00402a90
0058E0AE  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0058E0B1  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058E0B6  33 C0                     XOR EAX,EAX
0058E0B8  5F                        POP EDI
0058E0B9  5E                        POP ESI
0058E0BA  5B                        POP EBX
0058E0BB  8B E5                     MOV ESP,EBP
0058E0BD  5D                        POP EBP
0058E0BE  C2 04 00                  RET 0x4
switchD_0058df4b::caseD_113:
0058E0C1  8B 93 D5 01 00 00         MOV EDX,dword ptr [EBX + 0x1d5]
0058E0C7  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0058E0CD  FF 12                     CALL dword ptr [EDX]
0058E0CF  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0058E0D2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058E0D7  33 C0                     XOR EAX,EAX
0058E0D9  5F                        POP EDI
0058E0DA  5E                        POP ESI
0058E0DB  5B                        POP EBX
0058E0DC  8B E5                     MOV ESP,EBP
0058E0DE  5D                        POP EBP
0058E0DF  C2 04 00                  RET 0x4
switchD_0058df4b::caseD_128:
0058E0E2  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0058E0E8  E8 DF 71 E7 FF            CALL 0x004052cc
0058E0ED  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0058E0F3  50                        PUSH EAX
0058E0F4  E8 67 CA 15 00            CALL 0x006eab60
LAB_0058e0f9:
0058E0F9  8B CB                     MOV ECX,EBX
0058E0FB  E8 7A 41 E7 FF            CALL 0x0040227a
switchD_0058df4b::caseD_114:
0058E100  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0058E103  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0058E108  33 C0                     XOR EAX,EAX
0058E10A  5F                        POP EDI
0058E10B  5E                        POP ESI
0058E10C  5B                        POP EBX
0058E10D  8B E5                     MOV ESP,EBP
0058E10F  5D                        POP EBP
0058E110  C2 04 00                  RET 0x4
LAB_0058e113:
0058E113  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
0058E116  68 34 BB 7C 00            PUSH 0x7cbb34
0058E11B  68 CC 4C 7A 00            PUSH 0x7a4ccc
0058E120  56                        PUSH ESI
0058E121  57                        PUSH EDI
0058E122  68 5E 01 00 00            PUSH 0x15e
0058E127  68 7C BB 7C 00            PUSH 0x7cbb7c
0058E12C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0058E132  E8 99 F3 11 00            CALL 0x006ad4d0
0058E137  83 C4 18                  ADD ESP,0x18
0058E13A  85 C0                     TEST EAX,EAX
0058E13C  74 01                     JZ 0x0058e13f
0058E13E  CC                        INT3
LAB_0058e13f:
0058E13F  68 5F 01 00 00            PUSH 0x15f
0058E144  68 7C BB 7C 00            PUSH 0x7cbb7c
0058E149  57                        PUSH EDI
0058E14A  56                        PUSH ESI
0058E14B  E8 F0 7C 11 00            CALL 0x006a5e40
0058E150  5F                        POP EDI
0058E151  5E                        POP ESI
0058E152  B8 FF FF 00 00            MOV EAX,0xffff
0058E157  5B                        POP EBX
0058E158  8B E5                     MOV ESP,EBP
0058E15A  5D                        POP EBP
0058E15B  C2 04 00                  RET 0x4
