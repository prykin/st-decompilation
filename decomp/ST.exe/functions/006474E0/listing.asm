FUN_006474e0:
006474E0  55                        PUSH EBP
006474E1  8B EC                     MOV EBP,ESP
006474E3  83 EC 58                  SUB ESP,0x58
006474E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006474EB  53                        PUSH EBX
006474EC  56                        PUSH ESI
006474ED  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006474F0  57                        PUSH EDI
006474F1  8D 55 AC                  LEA EDX,[EBP + -0x54]
006474F4  8D 4D A8                  LEA ECX,[EBP + -0x58]
006474F7  6A 00                     PUSH 0x0
006474F9  52                        PUSH EDX
006474FA  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
00647501  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00647504  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0064750A  E8 E1 62 0E 00            CALL 0x0072d7f0
0064750F  8B F0                     MOV ESI,EAX
00647511  83 C4 08                  ADD ESP,0x8
00647514  85 F6                     TEST ESI,ESI
00647516  0F 85 01 03 00 00         JNZ 0x0064781d
0064751C  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0064751F  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00647522  85 DB                     TEST EBX,EBX
00647524  74 09                     JZ 0x0064752f
00647526  83 FB 02                  CMP EBX,0x2
00647529  0F 85 DD 01 00 00         JNZ 0x0064770c
LAB_0064752f:
0064752F  A1 64 67 80 00            MOV EAX,[0x00806764]
00647534  6A 00                     PUSH 0x0
00647536  6A 00                     PUSH 0x0
00647538  6A 01                     PUSH 0x1
0064753A  6A 00                     PUSH 0x0
0064753C  6A FF                     PUSH -0x1
0064753E  68 B0 26 7D 00            PUSH 0x7d26b0
00647543  6A 1D                     PUSH 0x1d
00647545  50                        PUSH EAX
00647546  E8 A5 25 0C 00            CALL 0x00709af0
0064754B  83 C4 20                  ADD ESP,0x20
0064754E  8B F8                     MOV EDI,EAX
00647550  8D 45 FC                  LEA EAX,[EBP + -0x4]
00647553  8B 4F 0D                  MOV ECX,dword ptr [EDI + 0xd]
00647556  8B 57 09                  MOV EDX,dword ptr [EDI + 0x9]
00647559  6A 00                     PUSH 0x0
0064755B  6A 2F                     PUSH 0x2f
0064755D  6A 5A                     PUSH 0x5a
0064755F  51                        PUSH ECX
00647560  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00647566  52                        PUSH EDX
00647567  6A 00                     PUSH 0x0
00647569  6A 01                     PUSH 0x1
0064756B  50                        PUSH EAX
0064756C  E8 EF 10 0A 00            CALL 0x006e8660
00647571  8B 4F 21                  MOV ECX,dword ptr [EDI + 0x21]
00647574  8B 17                     MOV EDX,dword ptr [EDI]
00647576  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00647579  6A 01                     PUSH 0x1
0064757B  51                        PUSH ECX
0064757C  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00647582  52                        PUSH EDX
00647583  6A 00                     PUSH 0x0
00647585  50                        PUSH EAX
00647586  E8 55 23 0A 00            CALL 0x006e98e0
0064758B  8B 4E 71                  MOV ECX,dword ptr [ESI + 0x71]
0064758E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00647591  51                        PUSH ECX
00647592  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00647598  6A 00                     PUSH 0x0
0064759A  52                        PUSH EDX
0064759B  E8 D0 2C 0A 00            CALL 0x006ea270
006475A0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006475A3  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006475A9  68 38 34 1F 41            PUSH 0x411f3438
006475AE  50                        PUSH EAX
006475AF  E8 0C 1D 0A 00            CALL 0x006e92c0
006475B4  DB 46 6D                  FILD dword ptr [ESI + 0x6d]
006475B7  51                        PUSH ECX
006475B8  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006475BE  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006475C4  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
006475CA  D9 1C 24                  FSTP float ptr [ESP]
006475CD  DB 46 69                  FILD dword ptr [ESI + 0x69]
006475D0  51                        PUSH ECX
006475D1  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006475D7  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006475DD  D9 1C 24                  FSTP float ptr [ESP]
006475E0  DB 46 65                  FILD dword ptr [ESI + 0x65]
006475E3  51                        PUSH ECX
006475E4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006475E7  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006475ED  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006475F3  D9 1C 24                  FSTP float ptr [ESP]
006475F6  51                        PUSH ECX
006475F7  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006475FD  E8 5E 33 0A 00            CALL 0x006ea960
00647602  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00647605  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0064760B  6A 00                     PUSH 0x0
0064760D  52                        PUSH EDX
0064760E  E8 8D 34 0A 00            CALL 0x006eaaa0
00647613  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00647616  89 7E 61                  MOV dword ptr [ESI + 0x61],EDI
00647619  89 46 5D                  MOV dword ptr [ESI + 0x5d],EAX
0064761C  8B 0D 64 67 80 00         MOV ECX,dword ptr [0x00806764]
00647622  6A 00                     PUSH 0x0
00647624  6A 00                     PUSH 0x0
00647626  6A 01                     PUSH 0x1
00647628  6A 00                     PUSH 0x0
0064762A  6A FF                     PUSH -0x1
0064762C  68 C8 26 7D 00            PUSH 0x7d26c8
00647631  6A 1D                     PUSH 0x1d
00647633  51                        PUSH ECX
00647634  E8 B7 24 0C 00            CALL 0x00709af0
00647639  83 C4 20                  ADD ESP,0x20
0064763C  8B F8                     MOV EDI,EAX
0064763E  8D 4D F8                  LEA ECX,[EBP + -0x8]
00647641  8B 57 0D                  MOV EDX,dword ptr [EDI + 0xd]
00647644  8B 47 09                  MOV EAX,dword ptr [EDI + 0x9]
00647647  6A 00                     PUSH 0x0
00647649  6A 6A                     PUSH 0x6a
0064764B  6A 40                     PUSH 0x40
0064764D  52                        PUSH EDX
0064764E  50                        PUSH EAX
0064764F  6A 00                     PUSH 0x0
00647651  6A 01                     PUSH 0x1
00647653  51                        PUSH ECX
00647654  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0064765A  E8 01 10 0A 00            CALL 0x006e8660
0064765F  8B 57 21                  MOV EDX,dword ptr [EDI + 0x21]
00647662  8B 07                     MOV EAX,dword ptr [EDI]
00647664  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00647667  6A 01                     PUSH 0x1
00647669  52                        PUSH EDX
0064766A  50                        PUSH EAX
0064766B  6A 00                     PUSH 0x0
0064766D  51                        PUSH ECX
0064766E  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00647674  E8 67 22 0A 00            CALL 0x006e98e0
00647679  8B 96 8A 00 00 00         MOV EDX,dword ptr [ESI + 0x8a]
0064767F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00647682  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00647688  52                        PUSH EDX
00647689  6A 00                     PUSH 0x0
0064768B  50                        PUSH EAX
0064768C  E8 DF 2B 0A 00            CALL 0x006ea270
00647691  DB 46 6D                  FILD dword ptr [ESI + 0x6d]
00647694  51                        PUSH ECX
00647695  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0064769B  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006476A1  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
006476A7  D9 1C 24                  FSTP float ptr [ESP]
006476AA  DB 46 69                  FILD dword ptr [ESI + 0x69]
006476AD  51                        PUSH ECX
006476AE  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006476B4  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006476BA  D9 1C 24                  FSTP float ptr [ESP]
006476BD  DB 46 65                  FILD dword ptr [ESI + 0x65]
006476C0  51                        PUSH ECX
006476C1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006476C4  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006476CA  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006476D0  D9 1C 24                  FSTP float ptr [ESP]
006476D3  51                        PUSH ECX
006476D4  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006476DA  E8 81 32 0A 00            CALL 0x006ea960
006476DF  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006476E2  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006476E8  6A 00                     PUSH 0x0
006476EA  52                        PUSH EDX
006476EB  E8 B0 33 0A 00            CALL 0x006eaaa0
006476F0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006476F3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006476F6  50                        PUSH EAX
006476F7  51                        PUSH ECX
006476F8  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006476FE  E8 5D 2D 0A 00            CALL 0x006ea460
00647703  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00647706  89 96 86 00 00 00         MOV dword ptr [ESI + 0x86],EDX
LAB_0064770c:
0064770C  85 DB                     TEST EBX,EBX
0064770E  0F 84 F4 00 00 00         JZ 0x00647808
00647714  8B 46 7A                  MOV EAX,dword ptr [ESI + 0x7a]
00647717  85 C0                     TEST EAX,EAX
00647719  0F 8D E9 00 00 00         JGE 0x00647808
0064771F  A1 64 67 80 00            MOV EAX,[0x00806764]
00647724  6A 00                     PUSH 0x0
00647726  6A 00                     PUSH 0x0
00647728  6A 01                     PUSH 0x1
0064772A  6A 00                     PUSH 0x0
0064772C  6A FF                     PUSH -0x1
0064772E  68 BC 26 7D 00            PUSH 0x7d26bc
00647733  6A 1D                     PUSH 0x1d
00647735  50                        PUSH EAX
00647736  E8 B5 23 0C 00            CALL 0x00709af0
0064773B  83 C4 20                  ADD ESP,0x20
0064773E  8B F8                     MOV EDI,EAX
00647740  8D 45 F4                  LEA EAX,[EBP + -0xc]
00647743  8B 4F 0D                  MOV ECX,dword ptr [EDI + 0xd]
00647746  8B 57 09                  MOV EDX,dword ptr [EDI + 0x9]
00647749  6A 00                     PUSH 0x0
0064774B  6A 7E                     PUSH 0x7e
0064774D  6A 4B                     PUSH 0x4b
0064774F  51                        PUSH ECX
00647750  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00647756  52                        PUSH EDX
00647757  6A 00                     PUSH 0x0
00647759  6A 01                     PUSH 0x1
0064775B  50                        PUSH EAX
0064775C  E8 FF 0E 0A 00            CALL 0x006e8660
00647761  8B 4F 21                  MOV ECX,dword ptr [EDI + 0x21]
00647764  8B 17                     MOV EDX,dword ptr [EDI]
00647766  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00647769  6A 01                     PUSH 0x1
0064776B  51                        PUSH ECX
0064776C  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00647772  52                        PUSH EDX
00647773  6A 00                     PUSH 0x0
00647775  50                        PUSH EAX
00647776  E8 65 21 0A 00            CALL 0x006e98e0
0064777B  8B 4E 7E                  MOV ECX,dword ptr [ESI + 0x7e]
0064777E  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00647781  51                        PUSH ECX
00647782  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00647788  6A 00                     PUSH 0x0
0064778A  52                        PUSH EDX
0064778B  E8 E0 2A 0A 00            CALL 0x006ea270
00647790  DB 46 6D                  FILD dword ptr [ESI + 0x6d]
00647793  51                        PUSH ECX
00647794  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00647797  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0064779D  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006477A3  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
006477A9  D9 1C 24                  FSTP float ptr [ESP]
006477AC  DB 46 69                  FILD dword ptr [ESI + 0x69]
006477AF  51                        PUSH ECX
006477B0  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006477B6  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006477BC  D9 1C 24                  FSTP float ptr [ESP]
006477BF  DB 46 65                  FILD dword ptr [ESI + 0x65]
006477C2  51                        PUSH ECX
006477C3  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006477C9  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006477CF  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006477D5  D9 1C 24                  FSTP float ptr [ESP]
006477D8  50                        PUSH EAX
006477D9  E8 82 31 0A 00            CALL 0x006ea960
006477DE  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006477E1  6A 00                     PUSH 0x0
006477E3  51                        PUSH ECX
006477E4  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006477EA  E8 B1 32 0A 00            CALL 0x006eaaa0
006477EF  8B 56 5D                  MOV EDX,dword ptr [ESI + 0x5d]
006477F2  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006477F5  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006477FB  52                        PUSH EDX
006477FC  50                        PUSH EAX
006477FD  E8 5E 2C 0A 00            CALL 0x006ea460
00647802  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00647805  89 4E 7A                  MOV dword ptr [ESI + 0x7a],ECX
LAB_00647808:
00647808  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
0064780B  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0064780E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00647814  5F                        POP EDI
00647815  5E                        POP ESI
00647816  5B                        POP EBX
00647817  8B E5                     MOV ESP,EBP
00647819  5D                        POP EBP
0064781A  C2 04 00                  RET 0x4
LAB_0064781d:
0064781D  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
00647820  68 24 27 7D 00            PUSH 0x7d2724
00647825  68 CC 4C 7A 00            PUSH 0x7a4ccc
0064782A  56                        PUSH ESI
0064782B  6A 00                     PUSH 0x0
0064782D  68 14 02 00 00            PUSH 0x214
00647832  68 E4 26 7D 00            PUSH 0x7d26e4
00647837  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0064783C  E8 8F 5C 06 00            CALL 0x006ad4d0
00647841  83 C4 18                  ADD ESP,0x18
00647844  85 C0                     TEST EAX,EAX
00647846  74 01                     JZ 0x00647849
00647848  CC                        INT3
LAB_00647849:
00647849  68 16 02 00 00            PUSH 0x216
0064784E  68 E4 26 7D 00            PUSH 0x7d26e4
00647853  6A 00                     PUSH 0x0
00647855  56                        PUSH ESI
00647856  E8 E5 E5 05 00            CALL 0x006a5e40
0064785B  5F                        POP EDI
0064785C  5E                        POP ESI
0064785D  B8 FF FF 00 00            MOV EAX,0xffff
00647862  5B                        POP EBX
00647863  8B E5                     MOV ESP,EBP
00647865  5D                        POP EBP
00647866  C2 04 00                  RET 0x4
