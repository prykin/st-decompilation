FUN_006a0740:
006A0740  55                        PUSH EBP
006A0741  8B EC                     MOV EBP,ESP
006A0743  83 EC 50                  SUB ESP,0x50
006A0746  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006A074B  53                        PUSH EBX
006A074C  56                        PUSH ESI
006A074D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006A0750  57                        PUSH EDI
006A0751  8D 55 B4                  LEA EDX,[EBP + -0x4c]
006A0754  8D 4D B0                  LEA ECX,[EBP + -0x50]
006A0757  6A 00                     PUSH 0x0
006A0759  52                        PUSH EDX
006A075A  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
006A0761  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006A0764  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006A076A  E8 81 D0 08 00            CALL 0x0072d7f0
006A076F  83 C4 08                  ADD ESP,0x8
006A0772  85 C0                     TEST EAX,EAX
006A0774  0F 85 3F 01 00 00         JNZ 0x006a08b9
006A077A  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006A077D  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
006A0780  C7 83 0B 57 00 00 32 00 00 00  MOV dword ptr [EBX + 0x570b],0x32
006A078A  A1 E0 3D 85 00            MOV EAX,[0x00853de0]
006A078F  50                        PUSH EAX
006A0790  51                        PUSH ECX
006A0791  8D 8B 4E 02 00 00         LEA ECX,[EBX + 0x24e]
006A0797  E8 67 19 D6 FF            CALL 0x00402103
006A079C  85 C0                     TEST EAX,EAX
006A079E  75 03                     JNZ 0x006a07a3
006A07A0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006a07a3:
006A07A3  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
006A07A9  52                        PUSH EDX
006A07AA  68 2B 23 00 00            PUSH 0x232b
006A07AF  E8 8C F9 00 00            CALL 0x006b0140
006A07B4  8B F8                     MOV EDI,EAX
006A07B6  83 C9 FF                  OR ECX,0xffffffff
006A07B9  33 C0                     XOR EAX,EAX
006A07BB  F2 AE                     SCASB.REPNE ES:EDI
006A07BD  F7 D1                     NOT ECX
006A07BF  2B F9                     SUB EDI,ECX
006A07C1  8D 83 FB 55 00 00         LEA EAX,[EBX + 0x55fb]
006A07C7  8B D1                     MOV EDX,ECX
006A07C9  8B F7                     MOV ESI,EDI
006A07CB  8B F8                     MOV EDI,EAX
006A07CD  C1 E9 02                  SHR ECX,0x2
006A07D0  F3 A5                     MOVSD.REP ES:EDI,ESI
006A07D2  8B CA                     MOV ECX,EDX
006A07D4  83 E1 03                  AND ECX,0x3
006A07D7  F3 A4                     MOVSB.REP ES:EDI,ESI
006A07D9  33 F6                     XOR ESI,ESI
006A07DB  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
006A07DE  56                        PUSH ESI
006A07DF  56                        PUSH ESI
006A07E0  56                        PUSH ESI
006A07E1  68 04 01 00 00            PUSH 0x104
006A07E6  50                        PUSH EAX
006A07E7  A1 38 D8 79 00            MOV EAX,[0x0079d838]
006A07EC  50                        PUSH EAX
006A07ED  56                        PUSH ESI
006A07EE  E8 FD 0B 05 00            CALL 0x006f13f0
006A07F3  8B 15 3C D8 79 00         MOV EDX,dword ptr [0x0079d83c]
006A07F9  56                        PUSH ESI
006A07FA  56                        PUSH ESI
006A07FB  56                        PUSH ESI
006A07FC  8D 8B F3 53 00 00         LEA ECX,[EBX + 0x53f3]
006A0802  68 04 01 00 00            PUSH 0x104
006A0807  51                        PUSH ECX
006A0808  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
006A080B  52                        PUSH EDX
006A080C  56                        PUSH ESI
006A080D  E8 DE 0B 05 00            CALL 0x006f13f0
006A0812  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
006A0815  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
006A0818  50                        PUSH EAX
006A0819  51                        PUSH ECX
006A081A  E8 E1 03 05 00            CALL 0x006f0c00
006A081F  83 C4 08                  ADD ESP,0x8
006A0822  85 C0                     TEST EAX,EAX
006A0824  74 03                     JZ 0x006a0829
006A0826  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_006a0829:
006A0829  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
006A082C  56                        PUSH ESI
006A082D  68 E4 A1 7C 00            PUSH 0x7ca1e4
006A0832  C6 42 04 20               MOV byte ptr [EDX + 0x4],0x20
006A0836  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
006A0839  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
006A083C  50                        PUSH EAX
006A083D  51                        PUSH ECX
006A083E  E8 6D F5 04 00            CALL 0x006efdb0
006A0843  83 C4 10                  ADD ESP,0x10
006A0846  85 C0                     TEST EAX,EAX
006A0848  74 03                     JZ 0x006a084d
006A084A  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_006a084d:
006A084D  39 75 FC                  CMP dword ptr [EBP + -0x4],ESI
006A0850  74 12                     JZ 0x006a0864
006A0852  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
006A0855  8B CB                     MOV ECX,EBX
006A0857  52                        PUSH EDX
006A0858  E8 1A 4A D6 FF            CALL 0x00405277
006A085D  85 C0                     TEST EAX,EAX
006A085F  75 03                     JNZ 0x006a0864
006A0861  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_006a0864:
006A0864  8B 83 34 02 00 00         MOV EAX,dword ptr [EBX + 0x234]
006A086A  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
006A086D  50                        PUSH EAX
006A086E  51                        PUSH ECX
006A086F  E8 5F 39 D6 FF            CALL 0x004041d3
006A0874  83 C4 08                  ADD ESP,0x8
006A0877  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006A087A  56                        PUSH ESI
006A087B  56                        PUSH ESI
006A087C  56                        PUSH ESI
006A087D  50                        PUSH EAX
006A087E  E8 CD 47 01 00            CALL 0x006b5050
006A0883  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006A0886  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
006A0889  50                        PUSH EAX
006A088A  A1 40 D8 79 00            MOV EAX,[0x0079d840]
006A088F  52                        PUSH EDX
006A0890  50                        PUSH EAX
006A0891  6A 0C                     PUSH 0xc
006A0893  E8 58 0B 05 00            CALL 0x006f13f0
006A0898  39 75 F8                  CMP dword ptr [EBP + -0x8],ESI
006A089B  74 09                     JZ 0x006a08a6
006A089D  8D 4D F8                  LEA ECX,[EBP + -0x8]
006A08A0  51                        PUSH ECX
006A08A1  E8 BA A7 00 00            CALL 0x006ab060
LAB_006a08a6:
006A08A6  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006A08A9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A08AC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006A08B2  5F                        POP EDI
006A08B3  5E                        POP ESI
006A08B4  5B                        POP EBX
006A08B5  8B E5                     MOV ESP,EBP
006A08B7  5D                        POP EBP
006A08B8  C3                        RET
LAB_006a08b9:
006A08B9  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006A08BC  68 8C 86 7D 00            PUSH 0x7d868c
006A08C1  68 CC 4C 7A 00            PUSH 0x7a4ccc
006A08C6  50                        PUSH EAX
006A08C7  6A 00                     PUSH 0x0
006A08C9  68 CD 00 00 00            PUSH 0xcd
006A08CE  68 4C 86 7D 00            PUSH 0x7d864c
006A08D3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006A08D9  E8 F2 CB 00 00            CALL 0x006ad4d0
006A08DE  83 C4 18                  ADD ESP,0x18
006A08E1  85 C0                     TEST EAX,EAX
006A08E3  74 01                     JZ 0x006a08e6
006A08E5  CC                        INT3
LAB_006a08e6:
006A08E6  5F                        POP EDI
006A08E7  5E                        POP ESI
006A08E8  33 C0                     XOR EAX,EAX
006A08EA  5B                        POP EBX
006A08EB  8B E5                     MOV ESP,EBP
006A08ED  5D                        POP EBP
006A08EE  C3                        RET
