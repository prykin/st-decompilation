FUN_00693b20:
00693B20  55                        PUSH EBP
00693B21  8B EC                     MOV EBP,ESP
00693B23  83 EC 08                  SUB ESP,0x8
00693B26  53                        PUSH EBX
00693B27  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00693B2A  56                        PUSH ESI
00693B2B  8B F1                     MOV ESI,ECX
00693B2D  53                        PUSH EBX
00693B2E  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00693B31  E8 DD FD D6 FF            CALL 0x00403913
00693B36  85 C0                     TEST EAX,EAX
00693B38  0F 85 8B 00 00 00         JNZ 0x00693bc9
00693B3E  57                        PUSH EDI
00693B3F  8B CE                     MOV ECX,ESI
00693B41  E8 B9 EE D6 FF            CALL 0x004029ff
00693B46  8D 14 DB                  LEA EDX,[EBX + EBX*0x8]
00693B49  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00693B4C  B9 14 00 00 00            MOV ECX,0x14
00693B51  8D 04 D6                  LEA EAX,[ESI + EDX*0x8]
00693B54  BE 68 62 7D 00            MOV ESI,0x7d6268
00693B59  03 D0                     ADD EDX,EAX
00693B5B  8D 42 11                  LEA EAX,[EDX + 0x11]
00693B5E  8B F8                     MOV EDI,EAX
00693B60  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00693B63  F3 A5                     MOVSD.REP ES:EDI,ESI
00693B65  8A 4D 0C                  MOV CL,byte ptr [EBP + 0xc]
00693B68  A4                        MOVSB ES:EDI,ESI
00693B69  88 5A 33                  MOV byte ptr [EDX + 0x33],BL
00693B6C  88 4A 32                  MOV byte ptr [EDX + 0x32],CL
00693B6F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00693B72  89 4A 35                  MOV dword ptr [EDX + 0x35],ECX
00693B75  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00693B78  89 4A 39                  MOV dword ptr [EDX + 0x39],ECX
00693B7B  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00693B7E  89 4A 3D                  MOV dword ptr [EDX + 0x3d],ECX
00693B81  8A 4D 1C                  MOV CL,byte ptr [EBP + 0x1c]
00693B84  88 08                     MOV byte ptr [EAX],CL
00693B86  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00693B89  85 C9                     TEST ECX,ECX
00693B8B  7C 03                     JL 0x00693b90
00693B8D  88 4A 34                  MOV byte ptr [EDX + 0x34],CL
LAB_00693b90:
00693B90  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
00693B93  85 FF                     TEST EDI,EDI
00693B95  74 23                     JZ 0x00693bba
00693B97  83 C9 FF                  OR ECX,0xffffffff
00693B9A  33 C0                     XOR EAX,EAX
00693B9C  83 C2 12                  ADD EDX,0x12
00693B9F  F2 AE                     SCASB.REPNE ES:EDI
00693BA1  F7 D1                     NOT ECX
00693BA3  2B F9                     SUB EDI,ECX
00693BA5  8B C1                     MOV EAX,ECX
00693BA7  8B F7                     MOV ESI,EDI
00693BA9  8B FA                     MOV EDI,EDX
00693BAB  C1 E9 02                  SHR ECX,0x2
00693BAE  F3 A5                     MOVSD.REP ES:EDI,ESI
00693BB0  8B C8                     MOV ECX,EAX
00693BB2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00693BB5  83 E1 03                  AND ECX,0x3
00693BB8  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00693bba:
00693BBA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00693BBD  5F                        POP EDI
00693BBE  5E                        POP ESI
00693BBF  5B                        POP EBX
00693BC0  FE 41 10                  INC byte ptr [ECX + 0x10]
00693BC3  8B E5                     MOV ESP,EBP
00693BC5  5D                        POP EBP
00693BC6  C2 1C 00                  RET 0x1c
LAB_00693bc9:
00693BC9  5E                        POP ESI
00693BCA  33 C0                     XOR EAX,EAX
00693BCC  5B                        POP EBX
00693BCD  8B E5                     MOV ESP,EBP
00693BCF  5D                        POP EBP
00693BD0  C2 1C 00                  RET 0x1c
