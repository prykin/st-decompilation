cLoadingTy::InitParam:
00554800  55                        PUSH EBP
00554801  8B EC                     MOV EBP,ESP
00554803  83 EC 48                  SUB ESP,0x48
00554806  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0055480B  53                        PUSH EBX
0055480C  56                        PUSH ESI
0055480D  57                        PUSH EDI
0055480E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00554811  33 FF                     XOR EDI,EDI
00554813  8D 55 BC                  LEA EDX,[EBP + -0x44]
00554816  8D 4D B8                  LEA ECX,[EBP + -0x48]
00554819  57                        PUSH EDI
0055481A  52                        PUSH EDX
0055481B  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0055481E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00554824  E8 C7 8F 1D 00            CALL 0x0072d7f0
00554829  8B F0                     MOV ESI,EAX
0055482B  83 C4 08                  ADD ESP,0x8
0055482E  3B F7                     CMP ESI,EDI
00554830  0F 85 4B 01 00 00         JNZ 0x00554981
00554836  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00554839  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055483C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0055483F  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
00554842  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00554845  3B C7                     CMP EAX,EDI
00554847  89 4E 18                  MOV dword ptr [ESI + 0x18],ECX
0055484A  7F 05                     JG 0x00554851
0055484C  8B 16                     MOV EDX,dword ptr [ESI]
0055484E  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
LAB_00554851:
00554851  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00554854  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00554857  3B C7                     CMP EAX,EDI
00554859  7F 05                     JG 0x00554860
0055485B  8B 06                     MOV EAX,dword ptr [ESI]
0055485D  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
LAB_00554860:
00554860  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
00554863  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00554866  89 7E 0C                  MOV dword ptr [ESI + 0xc],EDI
00554869  89 7E 10                  MOV dword ptr [ESI + 0x10],EDI
0055486C  89 7E 38                  MOV dword ptr [ESI + 0x38],EDI
0055486F  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
00554872  3B DF                     CMP EBX,EDI
00554874  75 1A                     JNZ 0x00554890
00554876  33 DB                     XOR EBX,EBX
00554878  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
0055487C  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
00554880  83 C3 1F                  ADD EBX,0x1f
00554883  C1 EB 03                  SHR EBX,0x3
00554886  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
0055488C  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_00554890:
00554890  50                        PUSH EAX
00554891  E8 0A 07 16 00            CALL 0x006b4fa0
00554896  8B CB                     MOV ECX,EBX
00554898  8B F8                     MOV EDI,EAX
0055489A  8B D1                     MOV EDX,ECX
0055489C  33 C0                     XOR EAX,EAX
0055489E  C1 E9 02                  SHR ECX,0x2
005548A1  F3 AB                     STOSD.REP ES:EDI
005548A3  8B CA                     MOV ECX,EDX
005548A5  83 E1 03                  AND ECX,0x3
005548A8  F3 AA                     STOSB.REP ES:EDI
005548AA  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005548AD  8B 7E 18                  MOV EDI,dword ptr [ESI + 0x18]
005548B0  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
005548B3  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
005548B6  8B 5E 14                  MOV EBX,dword ptr [ESI + 0x14]
005548B9  89 78 64                  MOV dword ptr [EAX + 0x64],EDI
005548BC  33 FF                     XOR EDI,EDI
005548BE  89 58 60                  MOV dword ptr [EAX + 0x60],EBX
005548C1  89 50 68                  MOV dword ptr [EAX + 0x68],EDX
005548C4  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
005548C7  89 48 6C                  MOV dword ptr [EAX + 0x6c],ECX
005548CA  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005548CD  89 78 50                  MOV dword ptr [EAX + 0x50],EDI
005548D0  89 78 54                  MOV dword ptr [EAX + 0x54],EDI
005548D3  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005548D6  89 4E 28                  MOV dword ptr [ESI + 0x28],ECX
005548D9  89 56 2C                  MOV dword ptr [ESI + 0x2c],EDX
005548DC  89 48 58                  MOV dword ptr [EAX + 0x58],ECX
005548DF  89 50 5C                  MOV dword ptr [EAX + 0x5c],EDX
005548E2  A1 18 76 80 00            MOV EAX,[0x00807618]
005548E7  50                        PUSH EAX
005548E8  68 7A 26 00 00            PUSH 0x267a
005548ED  E8 4E B8 15 00            CALL 0x006b0140
005548F2  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
005548F5  50                        PUSH EAX
005548F6  E8 C5 C8 1B 00            CALL 0x007111c0
005548FB  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
005548FE  03 C8                     ADD ECX,EAX
00554900  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
00554903  99                        CDQ
00554904  F7 F9                     IDIV ECX
00554906  89 4E 34                  MOV dword ptr [ESI + 0x34],ECX
00554909  83 F8 01                  CMP EAX,0x1
0055490C  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
0055490F  7D 18                     JGE 0x00554929
00554911  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00554917  68 A3 00 00 00            PUSH 0xa3
0055491C  68 0C 8F 7C 00            PUSH 0x7c8f0c
00554921  52                        PUSH EDX
00554922  6A FA                     PUSH -0x6
00554924  E8 17 15 15 00            CALL 0x006a5e40
LAB_00554929:
00554929  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0055492C  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
0055492F  89 46 58                  MOV dword ptr [ESI + 0x58],EAX
00554932  89 4E 54                  MOV dword ptr [ESI + 0x54],ECX
00554935  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
0055493B  A1 30 67 80 00            MOV EAX,[0x00806730]
00554940  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00554946  52                        PUSH EDX
00554947  50                        PUSH EAX
00554948  57                        PUSH EDI
00554949  57                        PUSH EDI
0055494A  51                        PUSH ECX
0055494B  E8 30 16 16 00            CALL 0x006b5f80
00554950  8B 16                     MOV EDX,dword ptr [ESI]
00554952  A1 9C 75 80 00            MOV EAX,[0x0080759c]
00554957  57                        PUSH EDI
00554958  52                        PUSH EDX
00554959  57                        PUSH EDI
0055495A  57                        PUSH EDI
0055495B  50                        PUSH EAX
0055495C  E8 DF FC 15 00            CALL 0x006b4640
00554961  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
00554967  57                        PUSH EDI
00554968  57                        PUSH EDI
00554969  51                        PUSH ECX
0055496A  E8 01 6A 16 00            CALL 0x006bb370
0055496F  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00554972  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00554978  5F                        POP EDI
00554979  5E                        POP ESI
0055497A  5B                        POP EBX
0055497B  8B E5                     MOV ESP,EBP
0055497D  5D                        POP EBP
0055497E  C2 24 00                  RET 0x24
LAB_00554981:
00554981  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00554984  68 60 8F 7C 00            PUSH 0x7c8f60
00554989  68 CC 4C 7A 00            PUSH 0x7a4ccc
0055498E  56                        PUSH ESI
0055498F  57                        PUSH EDI
00554990  68 AC 00 00 00            PUSH 0xac
00554995  68 0C 8F 7C 00            PUSH 0x7c8f0c
0055499A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0055499F  E8 2C 8B 15 00            CALL 0x006ad4d0
005549A4  83 C4 18                  ADD ESP,0x18
005549A7  85 C0                     TEST EAX,EAX
005549A9  74 01                     JZ 0x005549ac
005549AB  CC                        INT3
LAB_005549ac:
005549AC  68 AD 00 00 00            PUSH 0xad
005549B1  68 0C 8F 7C 00            PUSH 0x7c8f0c
005549B6  57                        PUSH EDI
005549B7  56                        PUSH ESI
005549B8  E8 83 14 15 00            CALL 0x006a5e40
005549BD  5F                        POP EDI
005549BE  5E                        POP ESI
005549BF  5B                        POP EBX
005549C0  8B E5                     MOV ESP,EBP
005549C2  5D                        POP EBP
005549C3  C2 24 00                  RET 0x24
