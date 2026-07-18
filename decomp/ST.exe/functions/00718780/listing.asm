FUN_00718780:
00718780  55                        PUSH EBP
00718781  8B EC                     MOV EBP,ESP
00718783  81 EC 68 0C 00 00         SUB ESP,0xc68
00718789  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071878E  53                        PUSH EBX
0071878F  56                        PUSH ESI
00718790  57                        PUSH EDI
00718791  8D 55 9C                  LEA EDX,[EBP + -0x64]
00718794  8D 4D 98                  LEA ECX,[EBP + -0x68]
00718797  6A 00                     PUSH 0x0
00718799  52                        PUSH EDX
0071879A  C7 45 E8 00 00 80 BF      MOV dword ptr [EBP + -0x18],0xbf800000
007187A1  C7 45 F4 00 00 80 BF      MOV dword ptr [EBP + -0xc],0xbf800000
007187A8  C7 45 EC 00 00 80 BF      MOV dword ptr [EBP + -0x14],0xbf800000
007187AF  C7 45 F0 00 00 80 BF      MOV dword ptr [EBP + -0x10],0xbf800000
007187B6  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
007187B9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007187BF  E8 2C 50 01 00            CALL 0x0072d7f0
007187C4  8B F0                     MOV ESI,EAX
007187C6  83 C4 08                  ADD ESP,0x8
007187C9  85 F6                     TEST ESI,ESI
007187CB  0F 85 1A 02 00 00         JNZ 0x007189eb
007187D1  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
007187D4  85 C0                     TEST EAX,EAX
007187D6  75 11                     JNZ 0x007187e9
007187D8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007187DB  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007187DE  03 C1                     ADD EAX,ECX
007187E0  50                        PUSH EAX
007187E1  E8 2A 24 F9 FF            CALL 0x006aac10
007187E6  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
LAB_007187e9:
007187E9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007187EC  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
007187EF  8D 95 98 F3 FF FF         LEA EDX,[EBP + 0xfffff398]
007187F5  33 F6                     XOR ESI,ESI
007187F7  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
007187FA  8D 58 02                  LEA EBX,[EAX + 0x2]
LAB_007187fd:
007187FD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00718800  3B F0                     CMP ESI,EAX
00718802  7C 0A                     JL 0x0071880e
00718804  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00718807  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
0071880A  3B F2                     CMP ESI,EDX
0071880C  7C 0E                     JL 0x0071881c
LAB_0071880e:
0071880E  3B F7                     CMP ESI,EDI
00718810  7C 2E                     JL 0x00718840
00718812  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00718815  8D 14 0F                  LEA EDX,[EDI + ECX*0x1]
00718818  3B F2                     CMP ESI,EDX
0071881A  7D 24                     JGE 0x00718840
LAB_0071881c:
0071881C  8A 43 FE                  MOV AL,byte ptr [EBX + -0x2]
0071881F  8A 4B FF                  MOV CL,byte ptr [EBX + -0x1]
00718822  8A 13                     MOV DL,byte ptr [EBX]
00718824  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
00718827  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071882A  88 4D F9                  MOV byte ptr [EBP + -0x7],CL
0071882D  8D 4D F8                  LEA ECX,[EBP + -0x8]
00718830  50                        PUSH EAX
00718831  51                        PUSH ECX
00718832  88 55 FA                  MOV byte ptr [EBP + -0x6],DL
00718835  E8 F6 F8 FF FF            CALL 0x00718130
0071883A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0071883D  83 C4 08                  ADD ESP,0x8
LAB_00718840:
00718840  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00718843  46                        INC ESI
00718844  83 C3 04                  ADD EBX,0x4
00718847  83 C2 0C                  ADD EDX,0xc
0071884A  81 FE 00 01 00 00         CMP ESI,0x100
00718850  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00718853  7C A8                     JL 0x007187fd
00718855  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00718858  8B C8                     MOV ECX,EAX
0071885A  8D 1C 10                  LEA EBX,[EAX + EDX*0x1]
0071885D  3B C3                     CMP EAX,EBX
0071885F  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
00718862  7D 64                     JGE 0x007188c8
00718864  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
00718867  8D 94 95 9C F3 FF FF      LEA EDX,[EBP + EDX*0x4 + 0xfffff39c]
LAB_0071886e:
0071886E  3B CF                     CMP ECX,EDI
00718870  7C 09                     JL 0x0071887b
00718872  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
00718875  03 F7                     ADD ESI,EDI
00718877  3B CE                     CMP ECX,ESI
00718879  7C 45                     JL 0x007188c0
LAB_0071887b:
0071887B  D9 45 E8                  FLD float ptr [EBP + -0x18]
0071887E  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00718884  DF E0                     FNSTSW AX
00718886  F6 C4 01                  TEST AH,0x1
00718889  75 0C                     JNZ 0x00718897
0071888B  D9 45 E8                  FLD float ptr [EBP + -0x18]
0071888E  D8 1A                     FCOMP float ptr [EDX]
00718890  DF E0                     FNSTSW AX
00718892  F6 C4 41                  TEST AH,0x41
00718895  75 05                     JNZ 0x0071889c
LAB_00718897:
00718897  8B 02                     MOV EAX,dword ptr [EDX]
00718899  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_0071889c:
0071889C  D9 45 F4                  FLD float ptr [EBP + -0xc]
0071889F  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
007188A5  DF E0                     FNSTSW AX
007188A7  F6 C4 01                  TEST AH,0x1
007188AA  75 0C                     JNZ 0x007188b8
007188AC  D9 45 F4                  FLD float ptr [EBP + -0xc]
007188AF  D8 1A                     FCOMP float ptr [EDX]
007188B1  DF E0                     FNSTSW AX
007188B3  F6 C4 01                  TEST AH,0x1
007188B6  74 05                     JZ 0x007188bd
LAB_007188b8:
007188B8  8B 02                     MOV EAX,dword ptr [EDX]
007188BA  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_007188bd:
007188BD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_007188c0:
007188C0  41                        INC ECX
007188C1  83 C2 0C                  ADD EDX,0xc
007188C4  3B CB                     CMP ECX,EBX
007188C6  7C A6                     JL 0x0071886e
LAB_007188c8:
007188C8  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
007188CB  8D 34 0F                  LEA ESI,[EDI + ECX*0x1]
007188CE  3B FE                     CMP EDI,ESI
007188D0  7D 59                     JGE 0x0071892b
007188D2  8D 14 7F                  LEA EDX,[EDI + EDI*0x2]
007188D5  8D 8C 95 9C F3 FF FF      LEA ECX,[EBP + EDX*0x4 + 0xfffff39c]
007188DC  8B D6                     MOV EDX,ESI
007188DE  2B D7                     SUB EDX,EDI
LAB_007188e0:
007188E0  D9 45 EC                  FLD float ptr [EBP + -0x14]
007188E3  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
007188E9  DF E0                     FNSTSW AX
007188EB  F6 C4 01                  TEST AH,0x1
007188EE  75 0C                     JNZ 0x007188fc
007188F0  D9 45 EC                  FLD float ptr [EBP + -0x14]
007188F3  D8 19                     FCOMP float ptr [ECX]
007188F5  DF E0                     FNSTSW AX
007188F7  F6 C4 41                  TEST AH,0x41
007188FA  75 05                     JNZ 0x00718901
LAB_007188fc:
007188FC  8B 01                     MOV EAX,dword ptr [ECX]
007188FE  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_00718901:
00718901  D9 45 F0                  FLD float ptr [EBP + -0x10]
00718904  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0071890A  DF E0                     FNSTSW AX
0071890C  F6 C4 01                  TEST AH,0x1
0071890F  75 0C                     JNZ 0x0071891d
00718911  D9 45 F0                  FLD float ptr [EBP + -0x10]
00718914  D8 19                     FCOMP float ptr [ECX]
00718916  DF E0                     FNSTSW AX
00718918  F6 C4 01                  TEST AH,0x1
0071891B  74 05                     JZ 0x00718922
LAB_0071891d:
0071891D  8B 01                     MOV EAX,dword ptr [ECX]
0071891F  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_00718922:
00718922  83 C1 0C                  ADD ECX,0xc
00718925  4A                        DEC EDX
00718926  75 B8                     JNZ 0x007188e0
00718928  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_0071892b:
0071892B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0071892E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00718931  3B CB                     CMP ECX,EBX
00718933  0F 8D 9F 00 00 00         JGE 0x007189d8
00718939  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
0071893C  8D 94 8D 9C F3 FF FF      LEA EDX,[EBP + ECX*0x4 + 0xfffff39c]
00718943  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
LAB_00718946:
00718946  3B C7                     CMP EAX,EDI
00718948  7C 0C                     JL 0x00718956
0071894A  3B C6                     CMP EAX,ESI
0071894C  7D 08                     JGE 0x00718956
0071894E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00718951  88 04 08                  MOV byte ptr [EAX + ECX*0x1],AL
00718954  EB 6D                     JMP 0x007189c3
LAB_00718956:
00718956  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00718959  83 CB FF                  OR EBX,0xffffffff
0071895C  D9 45 F4                  FLD float ptr [EBP + -0xc]
0071895F  D8 22                     FSUB float ptr [EDX]
00718961  D9 45 F0                  FLD float ptr [EBP + -0x10]
00718964  D8 65 EC                  FSUB float ptr [EBP + -0x14]
00718967  3B FE                     CMP EDI,ESI
00718969  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
00718970  DE C9                     FMULP
00718972  D9 45 F4                  FLD float ptr [EBP + -0xc]
00718975  D8 65 E8                  FSUB float ptr [EBP + -0x18]
00718978  8B CF                     MOV ECX,EDI
0071897A  DE F9                     FDIVP
0071897C  D8 6D F0                  FSUBR float ptr [EBP + -0x10]
0071897F  D9 5D F8                  FSTP float ptr [EBP + -0x8]
00718982  7D 36                     JGE 0x007189ba
00718984  8D 14 7F                  LEA EDX,[EDI + EDI*0x2]
00718987  8D 94 95 9C F3 FF FF      LEA EDX,[EBP + EDX*0x4 + 0xfffff39c]
LAB_0071898e:
0071898E  D9 45 F8                  FLD float ptr [EBP + -0x8]
00718991  D8 22                     FSUB float ptr [EDX]
00718993  85 DB                     TEST EBX,EBX
00718995  D9 E1                     FABS
00718997  7C 0D                     JL 0x007189a6
00718999  D8 55 E0                  FCOM float ptr [EBP + -0x20]
0071899C  DF E0                     FNSTSW AX
0071899E  F6 C4 01                  TEST AH,0x1
007189A1  74 0A                     JZ 0x007189ad
007189A3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_007189a6:
007189A6  D9 5D E0                  FSTP float ptr [EBP + -0x20]
007189A9  8B D9                     MOV EBX,ECX
007189AB  EB 05                     JMP 0x007189b2
LAB_007189ad:
007189AD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007189B0  DD D8                     FSTP ST0
LAB_007189b2:
007189B2  41                        INC ECX
007189B3  83 C2 0C                  ADD EDX,0xc
007189B6  3B CE                     CMP ECX,ESI
007189B8  7C D4                     JL 0x0071898e
LAB_007189ba:
007189BA  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
007189BD  88 1C 08                  MOV byte ptr [EAX + ECX*0x1],BL
007189C0  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
LAB_007189c3:
007189C3  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
007189C6  40                        INC EAX
007189C7  83 C2 0C                  ADD EDX,0xc
007189CA  3B C3                     CMP EAX,EBX
007189CC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007189CF  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
007189D2  0F 8C 6E FF FF FF         JL 0x00718946
LAB_007189d8:
007189D8  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
007189DB  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
007189DE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
007189E4  5F                        POP EDI
007189E5  5E                        POP ESI
007189E6  5B                        POP EBX
007189E7  8B E5                     MOV ESP,EBP
007189E9  5D                        POP EBP
007189EA  C3                        RET
LAB_007189eb:
007189EB  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
007189EE  68 30 07 7F 00            PUSH 0x7f0730
007189F3  68 CC 4C 7A 00            PUSH 0x7a4ccc
007189F8  56                        PUSH ESI
007189F9  6A 00                     PUSH 0x0
007189FB  68 DC 00 00 00            PUSH 0xdc
00718A00  68 18 07 7F 00            PUSH 0x7f0718
00718A05  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00718A0A  E8 C1 4A F9 FF            CALL 0x006ad4d0
00718A0F  83 C4 18                  ADD ESP,0x18
00718A12  85 C0                     TEST EAX,EAX
00718A14  74 01                     JZ 0x00718a17
00718A16  CC                        INT3
LAB_00718a17:
00718A17  68 DD 00 00 00            PUSH 0xdd
00718A1C  68 18 07 7F 00            PUSH 0x7f0718
00718A21  6A 00                     PUSH 0x0
00718A23  56                        PUSH ESI
00718A24  E8 17 D4 F8 FF            CALL 0x006a5e40
00718A29  5F                        POP EDI
00718A2A  5E                        POP ESI
00718A2B  33 C0                     XOR EAX,EAX
00718A2D  5B                        POP EBX
00718A2E  8B E5                     MOV ESP,EBP
00718A30  5D                        POP EBP
00718A31  C3                        RET
