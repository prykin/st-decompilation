FUN_006057c0:
006057C0  55                        PUSH EBP
006057C1  8B EC                     MOV EBP,ESP
006057C3  83 EC 0C                  SUB ESP,0xc
006057C6  53                        PUSH EBX
006057C7  56                        PUSH ESI
006057C8  8B F1                     MOV ESI,ECX
006057CA  57                        PUSH EDI
006057CB  8B 86 AF 02 00 00         MOV EAX,dword ptr [ESI + 0x2af]
006057D1  85 C0                     TEST EAX,EAX
006057D3  0F 84 BA 02 00 00         JZ 0x00605a93
006057D9  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
006057DF  85 FF                     TEST EDI,EDI
006057E1  0F 84 45 01 00 00         JZ 0x0060592c
006057E7  8B 8E 92 02 00 00         MOV ECX,dword ptr [ESI + 0x292]
006057ED  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006057F2  85 C9                     TEST ECX,ECX
006057F4  7C 14                     JL 0x0060580a
006057F6  F7 E9                     IMUL ECX
006057F8  C1 FA 06                  SAR EDX,0x6
006057FB  8B C2                     MOV EAX,EDX
006057FD  C1 E8 1F                  SHR EAX,0x1f
00605800  03 D0                     ADD EDX,EAX
00605802  0F BF CA                  MOVSX ECX,DX
00605805  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00605808  EB 13                     JMP 0x0060581d
LAB_0060580a:
0060580A  F7 E9                     IMUL ECX
0060580C  C1 FA 06                  SAR EDX,0x6
0060580F  8B C2                     MOV EAX,EDX
00605811  C1 E8 1F                  SHR EAX,0x1f
00605814  03 D0                     ADD EDX,EAX
00605816  0F BF C2                  MOVSX EAX,DX
00605819  48                        DEC EAX
0060581A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0060581d:
0060581D  8B 8E 8E 02 00 00         MOV ECX,dword ptr [ESI + 0x28e]
00605823  B8 79 19 8C 02            MOV EAX,0x28c1979
00605828  85 C9                     TEST ECX,ECX
0060582A  7C 10                     JL 0x0060583c
0060582C  F7 E9                     IMUL ECX
0060582E  D1 FA                     SAR EDX,0x1
00605830  8B CA                     MOV ECX,EDX
00605832  C1 E9 1F                  SHR ECX,0x1f
00605835  03 D1                     ADD EDX,ECX
00605837  0F BF DA                  MOVSX EBX,DX
0060583A  EB 0F                     JMP 0x0060584b
LAB_0060583c:
0060583C  F7 E9                     IMUL ECX
0060583E  D1 FA                     SAR EDX,0x1
00605840  8B C2                     MOV EAX,EDX
00605842  C1 E8 1F                  SHR EAX,0x1f
00605845  03 D0                     ADD EDX,EAX
00605847  0F BF DA                  MOVSX EBX,DX
0060584A  4B                        DEC EBX
LAB_0060584b:
0060584B  8B 8E 8A 02 00 00         MOV ECX,dword ptr [ESI + 0x28a]
00605851  B8 79 19 8C 02            MOV EAX,0x28c1979
00605856  85 C9                     TEST ECX,ECX
00605858  7C 10                     JL 0x0060586a
0060585A  F7 E9                     IMUL ECX
0060585C  D1 FA                     SAR EDX,0x1
0060585E  8B CA                     MOV ECX,EDX
00605860  C1 E9 1F                  SHR ECX,0x1f
00605863  03 D1                     ADD EDX,ECX
00605865  0F BF C2                  MOVSX EAX,DX
00605868  EB 0F                     JMP 0x00605879
LAB_0060586a:
0060586A  F7 E9                     IMUL ECX
0060586C  D1 FA                     SAR EDX,0x1
0060586E  8B C2                     MOV EAX,EDX
00605870  C1 E8 1F                  SHR EAX,0x1f
00605873  03 D0                     ADD EDX,EAX
00605875  0F BF C2                  MOVSX EAX,DX
00605878  48                        DEC EAX
LAB_00605879:
00605879  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
00605880  74 68                     JZ 0x006058ea
00605882  8B 8F F8 00 00 00         MOV ECX,dword ptr [EDI + 0xf8]
00605888  85 C9                     TEST ECX,ECX
0060588A  74 5E                     JZ 0x006058ea
0060588C  8D 4D F4                  LEA ECX,[EBP + -0xc]
0060588F  8D 55 F8                  LEA EDX,[EBP + -0x8]
00605892  51                        PUSH ECX
00605893  52                        PUSH EDX
00605894  53                        PUSH EBX
00605895  50                        PUSH EAX
00605896  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
0060589C  8B CF                     MOV ECX,EDI
0060589E  50                        PUSH EAX
0060589F  E8 AF E6 DF FF            CALL 0x00403f53
006058A4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006058A7  85 C0                     TEST EAX,EAX
006058A9  7C 3F                     JL 0x006058ea
006058AB  83 F8 05                  CMP EAX,0x5
006058AE  7D 3A                     JGE 0x006058ea
006058B0  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006058B3  85 D2                     TEST EDX,EDX
006058B5  7C 33                     JL 0x006058ea
006058B7  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
006058BA  3B D1                     CMP EDX,ECX
006058BC  7D 2C                     JGE 0x006058ea
006058BE  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
006058C5  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006058C8  03 C3                     ADD EAX,EBX
006058CA  85 C0                     TEST EAX,EAX
006058CC  7C 1C                     JL 0x006058ea
006058CE  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
006058D1  7D 17                     JGE 0x006058ea
006058D3  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
006058D6  85 FF                     TEST EDI,EDI
006058D8  74 10                     JZ 0x006058ea
006058DA  0F AF C1                  IMUL EAX,ECX
006058DD  03 C7                     ADD EAX,EDI
006058DF  33 C9                     XOR ECX,ECX
006058E1  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
006058E4  8B C1                     MOV EAX,ECX
006058E6  85 C0                     TEST EAX,EAX
006058E8  74 23                     JZ 0x0060590d
LAB_006058ea:
006058EA  8B 86 86 02 00 00         MOV EAX,dword ptr [ESI + 0x286]
006058F0  85 C0                     TEST EAX,EAX
006058F2  75 38                     JNZ 0x0060592c
006058F4  8B 8E AF 02 00 00         MOV ECX,dword ptr [ESI + 0x2af]
006058FA  6A 00                     PUSH 0x0
006058FC  E8 81 D0 DF FF            CALL 0x00402982
00605901  C7 86 86 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x286],0x1
0060590B  EB 1F                     JMP 0x0060592c
LAB_0060590d:
0060590D  8B 86 86 02 00 00         MOV EAX,dword ptr [ESI + 0x286]
00605913  85 C0                     TEST EAX,EAX
00605915  74 15                     JZ 0x0060592c
00605917  8B 8E AF 02 00 00         MOV ECX,dword ptr [ESI + 0x2af]
0060591D  E8 ED E3 DF FF            CALL 0x00403d0f
00605922  C7 86 86 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x286],0x0
LAB_0060592c:
0060592C  83 BE 86 02 00 00 01      CMP dword ptr [ESI + 0x286],0x1
00605933  0F 85 5A 01 00 00         JNZ 0x00605a93
00605939  8B 96 82 02 00 00         MOV EDX,dword ptr [ESI + 0x282]
0060593F  8B 86 96 02 00 00         MOV EAX,dword ptr [ESI + 0x296]
00605945  8D BE 82 02 00 00         LEA EDI,[ESI + 0x282]
0060594B  8B 0C 95 44 EE 7C 00      MOV ECX,dword ptr [EDX*0x4 + 0x7cee44]
00605952  3B C1                     CMP EAX,ECX
00605954  7D 70                     JGE 0x006059c6
00605956  8B 8E AF 02 00 00         MOV ECX,dword ptr [ESI + 0x2af]
0060595C  50                        PUSH EAX
0060595D  6A 0D                     PUSH 0xd
0060595F  E8 00 B7 DF FF            CALL 0x00401064
00605964  8B 8E AF 02 00 00         MOV ECX,dword ptr [ESI + 0x2af]
0060596A  6A 0D                     PUSH 0xd
0060596C  E8 4B D7 DF FF            CALL 0x004030bc
00605971  DB 86 92 02 00 00         FILD dword ptr [ESI + 0x292]
00605977  51                        PUSH ECX
00605978  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0060597E  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00605984  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0060598A  D9 1C 24                  FSTP float ptr [ESP]
0060598D  DB 86 8E 02 00 00         FILD dword ptr [ESI + 0x28e]
00605993  51                        PUSH ECX
00605994  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0060599A  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006059A0  D9 1C 24                  FSTP float ptr [ESP]
006059A3  DB 86 8A 02 00 00         FILD dword ptr [ESI + 0x28a]
006059A9  51                        PUSH ECX
006059AA  8B 8E AF 02 00 00         MOV ECX,dword ptr [ESI + 0x2af]
006059B0  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006059B6  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006059BC  D9 1C 24                  FSTP float ptr [ESP]
006059BF  E8 15 EC DF FF            CALL 0x004045d9
006059C4  EB 0F                     JMP 0x006059d5
LAB_006059c6:
006059C6  75 0D                     JNZ 0x006059d5
006059C8  8B 8E AF 02 00 00         MOV ECX,dword ptr [ESI + 0x2af]
006059CE  6A 0D                     PUSH 0xd
006059D0  E8 8F E8 DF FF            CALL 0x00404264
LAB_006059d5:
006059D5  8B 9E 96 02 00 00         MOV EBX,dword ptr [ESI + 0x296]
006059DB  8B 0F                     MOV ECX,dword ptr [EDI]
006059DD  43                        INC EBX
006059DE  89 9E 96 02 00 00         MOV dword ptr [ESI + 0x296],EBX
006059E4  8B 0C 8D F4 ED 7C 00      MOV ECX,dword ptr [ECX*0x4 + 0x7cedf4]
006059EB  8B C3                     MOV EAX,EBX
006059ED  3B C1                     CMP EAX,ECX
006059EF  0F 8C 86 00 00 00         JL 0x00605a7b
006059F5  75 17                     JNZ 0x00605a0e
006059F7  6A 01                     PUSH 0x1
006059F9  6A 00                     PUSH 0x0
006059FB  57                        PUSH EDI
006059FC  8B CE                     MOV ECX,ESI
006059FE  E8 D9 01 E0 FF            CALL 0x00405bdc
00605A03  85 C0                     TEST EAX,EAX
00605A05  75 07                     JNZ 0x00605a0e
00605A07  C6 86 9E 02 00 00 01      MOV byte ptr [ESI + 0x29e],0x1
LAB_00605a0e:
00605A0E  8A 86 9E 02 00 00         MOV AL,byte ptr [ESI + 0x29e]
00605A14  84 C0                     TEST AL,AL
00605A16  74 63                     JZ 0x00605a7b
00605A18  8B 96 9F 02 00 00         MOV EDX,dword ptr [ESI + 0x29f]
00605A1E  8B 8E AF 02 00 00         MOV ECX,dword ptr [ESI + 0x2af]
00605A24  52                        PUSH EDX
00605A25  6A 0F                     PUSH 0xf
00605A27  E8 38 B6 DF FF            CALL 0x00401064
00605A2C  8B 8E AF 02 00 00         MOV ECX,dword ptr [ESI + 0x2af]
00605A32  6A 0F                     PUSH 0xf
00605A34  E8 83 D6 DF FF            CALL 0x004030bc
00605A39  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00605A3E  F6 80 E4 00 00 00 01      TEST byte ptr [EAX + 0xe4],0x1
00605A45  74 06                     JZ 0x00605a4d
00605A47  FF 86 9F 02 00 00         INC dword ptr [ESI + 0x29f]
LAB_00605a4d:
00605A4D  8B 8E 9F 02 00 00         MOV ECX,dword ptr [ESI + 0x29f]
00605A53  8B 86 A3 02 00 00         MOV EAX,dword ptr [ESI + 0x2a3]
00605A59  3B C8                     CMP ECX,EAX
00605A5B  7C 1E                     JL 0x00605a7b
00605A5D  8B 8E AF 02 00 00         MOV ECX,dword ptr [ESI + 0x2af]
00605A63  6A 0F                     PUSH 0xf
00605A65  C7 86 9F 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x29f],0x0
00605A6F  C6 86 9E 02 00 00 00      MOV byte ptr [ESI + 0x29e],0x0
00605A76  E8 E9 E7 DF FF            CALL 0x00404264
LAB_00605a7b:
00605A7B  8B 17                     MOV EDX,dword ptr [EDI]
00605A7D  8B 86 96 02 00 00         MOV EAX,dword ptr [ESI + 0x296]
00605A83  3B 04 95 1C EE 7C 00      CMP EAX,dword ptr [EDX*0x4 + 0x7cee1c]
00605A8A  7C 07                     JL 0x00605a93
00605A8C  8B CE                     MOV ECX,ESI
00605A8E  E8 B8 F6 DF FF            CALL 0x0040514b
LAB_00605a93:
00605A93  5F                        POP EDI
00605A94  5E                        POP ESI
00605A95  5B                        POP EBX
00605A96  8B E5                     MOV ESP,EBP
00605A98  5D                        POP EBP
00605A99  C3                        RET
