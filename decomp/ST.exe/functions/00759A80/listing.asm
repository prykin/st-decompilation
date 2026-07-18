FUN_00759a80:
00759A80  55                        PUSH EBP
00759A81  8B EC                     MOV EBP,ESP
00759A83  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00759A86  53                        PUSH EBX
00759A87  56                        PUSH ESI
00759A88  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00759A8B  57                        PUSH EDI
00759A8C  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00759A8F  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
00759A92  8D 1C 07                  LEA EBX,[EDI + EAX*0x1]
00759A95  3B D9                     CMP EBX,ECX
00759A97  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
00759A9A  77 0A                     JA 0x00759aa6
00759A9C  3B 46 0C                  CMP EAX,dword ptr [ESI + 0xc]
00759A9F  77 05                     JA 0x00759aa6
00759AA1  83 3E 00                  CMP dword ptr [ESI],0x0
00759AA4  75 17                     JNZ 0x00759abd
LAB_00759aa6:
00759AA6  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00759AAB  68 52 03 00 00            PUSH 0x352
00759AB0  68 C8 2D 7F 00            PUSH 0x7f2dc8
00759AB5  50                        PUSH EAX
00759AB6  6A 14                     PUSH 0x14
00759AB8  E8 83 C3 F4 FF            CALL 0x006a5e40
LAB_00759abd:
00759ABD  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00759AC0  3B F8                     CMP EDI,EAX
00759AC2  72 09                     JC 0x00759acd
00759AC4  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
00759AC7  03 C8                     ADD ECX,EAX
00759AC9  3B D9                     CMP EBX,ECX
00759ACB  76 5A                     JBE 0x00759b27
LAB_00759acd:
00759ACD  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
00759AD0  85 C0                     TEST EAX,EAX
00759AD2  75 18                     JNZ 0x00759aec
00759AD4  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00759ADA  68 58 03 00 00            PUSH 0x358
00759ADF  68 C8 2D 7F 00            PUSH 0x7f2dc8
00759AE4  52                        PUSH EDX
00759AE5  6A 44                     PUSH 0x44
00759AE7  E8 54 C3 F4 FF            CALL 0x006a5e40
LAB_00759aec:
00759AEC  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00759AEF  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00759AF2  85 C0                     TEST EAX,EAX
00759AF4  74 10                     JZ 0x00759b06
00759AF6  6A 01                     PUSH 0x1
00759AF8  56                        PUSH ESI
00759AF9  57                        PUSH EDI
00759AFA  E8 F1 00 00 00            CALL 0x00759bf0
00759AFF  C7 46 24 00 00 00 00      MOV dword ptr [ESI + 0x24],0x0
LAB_00759b06:
00759B06  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00759B09  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00759B0C  3B C1                     CMP EAX,ECX
00759B0E  77 0B                     JA 0x00759b1b
00759B10  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
00759B13  8B C3                     MOV EAX,EBX
00759B15  2B C1                     SUB EAX,ECX
00759B17  79 02                     JNS 0x00759b1b
00759B19  33 C0                     XOR EAX,EAX
LAB_00759b1b:
00759B1B  6A 00                     PUSH 0x0
00759B1D  56                        PUSH ESI
00759B1E  57                        PUSH EDI
00759B1F  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
00759B22  E8 C9 00 00 00            CALL 0x00759bf0
LAB_00759b27:
00759B27  8B 7E 1C                  MOV EDI,dword ptr [ESI + 0x1c]
00759B2A  3B FB                     CMP EDI,EBX
00759B2C  73 64                     JNC 0x00759b92
00759B2E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00759B31  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00759B34  3B F8                     CMP EDI,EAX
00759B36  73 1E                     JNC 0x00759b56
00759B38  85 DB                     TEST EBX,EBX
00759B3A  74 17                     JZ 0x00759b53
00759B3C  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00759B41  68 7D 03 00 00            PUSH 0x37d
00759B46  68 C8 2D 7F 00            PUSH 0x7f2dc8
00759B4B  50                        PUSH EAX
00759B4C  6A 14                     PUSH 0x14
00759B4E  E8 ED C2 F4 FF            CALL 0x006a5e40
LAB_00759b53:
00759B53  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
LAB_00759b56:
00759B56  85 DB                     TEST EBX,EBX
00759B58  74 06                     JZ 0x00759b60
00759B5A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00759B5D  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
LAB_00759b60:
00759B60  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
00759B63  85 C0                     TEST EAX,EAX
00759B65  74 4D                     JZ 0x00759bb4
00759B67  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00759B6A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00759B6D  8B 5E 08                  MOV EBX,dword ptr [ESI + 0x8]
00759B70  2B F8                     SUB EDI,EAX
00759B72  2B C8                     SUB ECX,EAX
00759B74  C1 E3 08                  SHL EBX,0x8
00759B77  3B F9                     CMP EDI,ECX
00759B79  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
00759B7C  73 14                     JNC 0x00759b92
LAB_00759b7e:
00759B7E  8B 16                     MOV EDX,dword ptr [ESI]
00759B80  53                        PUSH EBX
00759B81  8B 04 BA                  MOV EAX,dword ptr [EDX + EDI*0x4]
00759B84  50                        PUSH EAX
00759B85  E8 A6 03 00 00            CALL 0x00759f30
00759B8A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00759B8D  47                        INC EDI
00759B8E  3B F8                     CMP EDI,EAX
00759B90  72 EC                     JC 0x00759b7e
LAB_00759b92:
00759B92  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00759B95  85 C0                     TEST EAX,EAX
00759B97  74 07                     JZ 0x00759ba0
LAB_00759b99:
00759B99  C7 46 24 01 00 00 00      MOV dword ptr [ESI + 0x24],0x1
LAB_00759ba0:
00759BA0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00759BA3  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00759BA6  8B 16                     MOV EDX,dword ptr [ESI]
00759BA8  2B C1                     SUB EAX,ECX
00759BAA  5F                        POP EDI
00759BAB  5E                        POP ESI
00759BAC  8D 04 82                  LEA EAX,[EDX + EAX*0x4]
00759BAF  5B                        POP EBX
00759BB0  5D                        POP EBP
00759BB1  C2 14 00                  RET 0x14
LAB_00759bb4:
00759BB4  85 DB                     TEST EBX,EBX
00759BB6  75 E1                     JNZ 0x00759b99
00759BB8  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00759BBE  68 8E 03 00 00            PUSH 0x38e
00759BC3  68 C8 2D 7F 00            PUSH 0x7f2dc8
00759BC8  51                        PUSH ECX
00759BC9  6A 14                     PUSH 0x14
00759BCB  E8 70 C2 F4 FF            CALL 0x006a5e40
00759BD0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00759BD3  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00759BD6  8B 16                     MOV EDX,dword ptr [ESI]
00759BD8  2B C1                     SUB EAX,ECX
00759BDA  5F                        POP EDI
00759BDB  5E                        POP ESI
00759BDC  8D 04 82                  LEA EAX,[EDX + EAX*0x4]
00759BDF  5B                        POP EBX
00759BE0  5D                        POP EBP
00759BE1  C2 14 00                  RET 0x14
