FUN_006b94e0:
006B94E0  55                        PUSH EBP
006B94E1  8B EC                     MOV EBP,ESP
006B94E3  83 EC 0C                  SUB ESP,0xc
006B94E6  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B94E9  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006B94EC  53                        PUSH EBX
006B94ED  56                        PUSH ESI
006B94EE  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
006B94F5  57                        PUSH EDI
006B94F6  2B C8                     SUB ECX,EAX
006B94F8  8B 5C 8A 18               MOV EBX,dword ptr [EDX + ECX*0x4 + 0x18]
006B94FC  8D 3C 8A                  LEA EDI,[EDX + ECX*0x4]
006B94FF  85 DB                     TEST EBX,EBX
006B9501  7F 05                     JG 0x006b9508
006B9503  BB 01 00 00 00            MOV EBX,0x1
LAB_006b9508:
006B9508  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006B950B  85 C9                     TEST ECX,ECX
006B950D  7D 0C                     JGE 0x006b951b
006B950F  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B9512  8D 54 08 01               LEA EDX,[EAX + ECX*0x1 + 0x1]
006B9516  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
006B9519  F7 D9                     NEG ECX
LAB_006b951b:
006B951B  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006B951E  85 C0                     TEST EAX,EAX
006B9520  7D 0C                     JGE 0x006b952e
006B9522  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006B9525  8D 54 02 01               LEA EDX,[EDX + EAX*0x1 + 0x1]
006B9529  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
006B952C  F7 D8                     NEG EAX
LAB_006b952e:
006B952E  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B9531  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B9534  6A 0D                     PUSH 0xd
006B9536  56                        PUSH ESI
006B9537  8D 4C 0A FF               LEA ECX,[EDX + ECX*0x1 + -0x1]
006B953B  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006B953E  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006B9541  8B 8E 98 04 00 00         MOV ECX,dword ptr [ESI + 0x498]
006B9547  8D 44 02 FF               LEA EAX,[EDX + EAX*0x1 + -0x1]
006B954B  8B 96 A0 04 00 00         MOV EDX,dword ptr [ESI + 0x4a0]
006B9551  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
006B9554  8B 86 A4 04 00 00         MOV EAX,dword ptr [ESI + 0x4a4]
006B955A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006B955D  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006B9560  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006B9563  E8 98 25 00 00            CALL 0x006bbb00
006B9568  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
006B956B  51                        PUSH ECX
006B956C  56                        PUSH ESI
006B956D  E8 DE CE 00 00            CALL 0x006c6450
006B9572  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
006B9575  52                        PUSH EDX
006B9576  56                        PUSH ESI
006B9577  E8 94 CE 00 00            CALL 0x006c6410
006B957C  85 DB                     TEST EBX,EBX
006B957E  C7 45 10 00 00 00 00      MOV dword ptr [EBP + 0x10],0x0
006B9585  7E 40                     JLE 0x006b95c7
006B9587  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006B958A  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B958D  2B CB                     SUB ECX,EBX
006B958F  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
006B9592  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006B9595  EB 06                     JMP 0x006b959d
LAB_006b9597:
006B9597  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B959A  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
LAB_006b959d:
006B959D  8B 17                     MOV EDX,dword ptr [EDI]
006B959F  52                        PUSH EDX
006B95A0  50                        PUSH EAX
006B95A1  51                        PUSH ECX
006B95A2  50                        PUSH EAX
006B95A3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B95A6  50                        PUSH EAX
006B95A7  56                        PUSH ESI
006B95A8  E8 03 BE 00 00            CALL 0x006c53b0
006B95AD  85 C0                     TEST EAX,EAX
006B95AF  0F 85 05 01 00 00         JNZ 0x006b96ba
006B95B5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B95B8  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006B95BB  40                        INC EAX
006B95BC  42                        INC EDX
006B95BD  3B C3                     CMP EAX,EBX
006B95BF  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006B95C2  89 55 24                  MOV dword ptr [EBP + 0x24],EDX
006B95C5  7C D0                     JL 0x006b9597
LAB_006b95c7:
006B95C7  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
006B95CA  51                        PUSH ECX
006B95CB  56                        PUSH ESI
006B95CC  E8 3F CE 00 00            CALL 0x006c6410
006B95D1  85 DB                     TEST EBX,EBX
006B95D3  C7 45 10 00 00 00 00      MOV dword ptr [EBP + 0x10],0x0
006B95DA  7E 40                     JLE 0x006b961c
006B95DC  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006B95DF  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006B95E2  2B CB                     SUB ECX,EBX
006B95E4  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
006B95E7  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006B95EA  EB 06                     JMP 0x006b95f2
LAB_006b95ec:
006B95EC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B95EF  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
LAB_006b95f2:
006B95F2  8B 17                     MOV EDX,dword ptr [EDI]
006B95F4  52                        PUSH EDX
006B95F5  51                        PUSH ECX
006B95F6  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006B95F9  50                        PUSH EAX
006B95FA  51                        PUSH ECX
006B95FB  50                        PUSH EAX
006B95FC  56                        PUSH ESI
006B95FD  E8 AE BD 00 00            CALL 0x006c53b0
006B9602  85 C0                     TEST EAX,EAX
006B9604  0F 85 B0 00 00 00         JNZ 0x006b96ba
006B960A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B960D  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006B9610  40                        INC EAX
006B9611  4A                        DEC EDX
006B9612  3B C3                     CMP EAX,EBX
006B9614  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006B9617  89 55 24                  MOV dword ptr [EBP + 0x24],EDX
006B961A  7C D0                     JL 0x006b95ec
LAB_006b961c:
006B961C  8B 57 10                  MOV EDX,dword ptr [EDI + 0x10]
006B961F  52                        PUSH EDX
006B9620  56                        PUSH ESI
006B9621  E8 EA CD 00 00            CALL 0x006c6410
006B9626  85 DB                     TEST EBX,EBX
006B9628  C7 45 10 00 00 00 00      MOV dword ptr [EBP + 0x10],0x0
006B962F  7E 37                     JLE 0x006b9668
006B9631  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006B9634  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
006B9637  EB 03                     JMP 0x006b963c
LAB_006b9639:
006B9639  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
LAB_006b963c:
006B963C  8B 0F                     MOV ECX,dword ptr [EDI]
006B963E  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B9641  51                        PUSH ECX
006B9642  50                        PUSH EAX
006B9643  8D 0C 13                  LEA ECX,[EBX + EDX*0x1]
006B9646  51                        PUSH ECX
006B9647  50                        PUSH EAX
006B9648  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006B964B  50                        PUSH EAX
006B964C  56                        PUSH ESI
006B964D  E8 5E BD 00 00            CALL 0x006c53b0
006B9652  85 C0                     TEST EAX,EAX
006B9654  75 64                     JNZ 0x006b96ba
006B9656  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B9659  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006B965C  40                        INC EAX
006B965D  4A                        DEC EDX
006B965E  3B C3                     CMP EAX,EBX
006B9660  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006B9663  89 55 24                  MOV dword ptr [EBP + 0x24],EDX
006B9666  7C D1                     JL 0x006b9639
LAB_006b9668:
006B9668  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
006B966B  51                        PUSH ECX
006B966C  56                        PUSH ESI
006B966D  E8 9E CD 00 00            CALL 0x006c6410
006B9672  85 DB                     TEST EBX,EBX
006B9674  C7 45 10 00 00 00 00      MOV dword ptr [EBP + 0x10],0x0
006B967B  7E 3D                     JLE 0x006b96ba
006B967D  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006B9680  8D 04 13                  LEA EAX,[EBX + EDX*0x1]
006B9683  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
006B9686  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B9689  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006B968C  EB 03                     JMP 0x006b9691
LAB_006b968e:
006B968E  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
LAB_006b9691:
006B9691  8B 0F                     MOV ECX,dword ptr [EDI]
006B9693  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006B9696  51                        PUSH ECX
006B9697  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006B969A  52                        PUSH EDX
006B969B  50                        PUSH EAX
006B969C  51                        PUSH ECX
006B969D  50                        PUSH EAX
006B969E  56                        PUSH ESI
006B969F  E8 0C BD 00 00            CALL 0x006c53b0
006B96A4  85 C0                     TEST EAX,EAX
006B96A6  75 12                     JNZ 0x006b96ba
006B96A8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B96AB  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006B96AE  40                        INC EAX
006B96AF  42                        INC EDX
006B96B0  3B C3                     CMP EAX,EBX
006B96B2  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006B96B5  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
006B96B8  7C D4                     JL 0x006b968e
FUN_006b94e0::cf_common_exit_006B96BA:
006B96BA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006B96BD  52                        PUSH EDX
006B96BE  56                        PUSH ESI
006B96BF  E8 3C 24 00 00            CALL 0x006bbb00
006B96C4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006B96C7  50                        PUSH EAX
006B96C8  56                        PUSH ESI
006B96C9  E8 42 CD 00 00            CALL 0x006c6410
006B96CE  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006B96D1  51                        PUSH ECX
006B96D2  56                        PUSH ESI
006B96D3  E8 78 CD 00 00            CALL 0x006c6450
006B96D8  5F                        POP EDI
006B96D9  5E                        POP ESI
006B96DA  5B                        POP EBX
006B96DB  8B E5                     MOV ESP,EBP
006B96DD  5D                        POP EBP
006B96DE  C2 20 00                  RET 0x20
