FUN_0075fba0:
0075FBA0  55                        PUSH EBP
0075FBA1  8B EC                     MOV EBP,ESP
0075FBA3  53                        PUSH EBX
0075FBA4  56                        PUSH ESI
0075FBA5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075FBA8  57                        PUSH EDI
0075FBA9  8B BE BA 01 00 00         MOV EDI,dword ptr [ESI + 0x1ba]
0075FBAF  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0075FBB2  89 86 80 00 00 00         MOV dword ptr [ESI + 0x80],EAX
0075FBB8  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
0075FBBB  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
0075FBBE  89 4E 7C                  MOV dword ptr [ESI + 0x7c],ECX
0075FBC1  33 C9                     XOR ECX,ECX
0075FBC3  2B C1                     SUB EAX,ECX
0075FBC5  0F 84 AA 00 00 00         JZ 0x0075fc75
0075FBCB  48                        DEC EAX
0075FBCC  74 6D                     JZ 0x0075fc3b
0075FBCE  48                        DEC EAX
0075FBCF  74 1F                     JZ 0x0075fbf0
0075FBD1  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0075FBD7  68 18 03 00 00            PUSH 0x318
0075FBDC  68 A0 2E 7F 00            PUSH 0x7f2ea0
0075FBE1  52                        PUSH EDX
0075FBE2  6A 2F                     PUSH 0x2f
0075FBE4  E8 57 62 F4 FF            CALL 0x006a5e40
0075FBE9  5F                        POP EDI
0075FBEA  5E                        POP ESI
0075FBEB  5B                        POP EBX
0075FBEC  5D                        POP EBP
0075FBED  C2 08 00                  RET 0x8
LAB_0075fbf0:
0075FBF0  8B 47 44                  MOV EAX,dword ptr [EDI + 0x44]
0075FBF3  8D 5F 44                  LEA EBX,[EDI + 0x44]
0075FBF6  3B C1                     CMP EAX,ECX
0075FBF8  C7 47 04 00 01 76 00      MOV dword ptr [EDI + 0x4],0x760100
0075FBFF  89 4F 54                  MOV dword ptr [EDI + 0x54],ECX
0075FC02  75 06                     JNZ 0x0075fc0a
0075FC04  56                        PUSH ESI
0075FC05  E8 46 FF FF FF            CALL 0x0075fb50
LAB_0075fc0a:
0075FC0A  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
0075FC0D  33 FF                     XOR EDI,EDI
0075FC0F  8D 4C 00 04               LEA ECX,[EAX + EAX*0x1 + 0x4]
0075FC13  8B 46 70                  MOV EAX,dword ptr [ESI + 0x70]
0075FC16  85 C0                     TEST EAX,EAX
0075FC18  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0075FC1B  7E 73                     JLE 0x0075fc90
LAB_0075fc1d:
0075FC1D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075FC20  8B 03                     MOV EAX,dword ptr [EBX]
0075FC22  52                        PUSH EDX
0075FC23  50                        PUSH EAX
0075FC24  E8 07 A3 FF FF            CALL 0x00759f30
0075FC29  8B 46 70                  MOV EAX,dword ptr [ESI + 0x70]
0075FC2C  47                        INC EDI
0075FC2D  83 C3 04                  ADD EBX,0x4
0075FC30  3B F8                     CMP EDI,EAX
0075FC32  7C E9                     JL 0x0075fc1d
0075FC34  5F                        POP EDI
0075FC35  5E                        POP ESI
0075FC36  5B                        POP EBX
0075FC37  5D                        POP EBP
0075FC38  C2 08 00                  RET 0x8
LAB_0075fc3b:
0075FC3B  83 7E 70 03               CMP dword ptr [ESI + 0x70],0x3
0075FC3F  75 09                     JNZ 0x0075fc4a
0075FC41  C7 47 04 F0 FF 75 00      MOV dword ptr [EDI + 0x4],0x75fff0
0075FC48  EB 07                     JMP 0x0075fc51
LAB_0075fc4a:
0075FC4A  C7 47 04 E0 FE 75 00      MOV dword ptr [EDI + 0x4],0x75fee0
LAB_0075fc51:
0075FC51  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
0075FC54  89 4F 30                  MOV dword ptr [EDI + 0x30],ECX
0075FC57  3B C1                     CMP EAX,ECX
0075FC59  75 06                     JNZ 0x0075fc61
0075FC5B  56                        PUSH ESI
0075FC5C  E8 9F FD FF FF            CALL 0x0075fa00
LAB_0075fc61:
0075FC61  8B 47 34                  MOV EAX,dword ptr [EDI + 0x34]
0075FC64  85 C0                     TEST EAX,EAX
0075FC66  75 28                     JNZ 0x0075fc90
0075FC68  56                        PUSH ESI
0075FC69  E8 32 00 00 00            CALL 0x0075fca0
0075FC6E  5F                        POP EDI
0075FC6F  5E                        POP ESI
0075FC70  5B                        POP EBX
0075FC71  5D                        POP EBP
0075FC72  C2 08 00                  RET 0x8
LAB_0075fc75:
0075FC75  83 7E 70 03               CMP dword ptr [ESI + 0x70],0x3
0075FC79  75 0E                     JNZ 0x0075fc89
0075FC7B  C7 47 04 30 FE 75 00      MOV dword ptr [EDI + 0x4],0x75fe30
0075FC82  5F                        POP EDI
0075FC83  5E                        POP ESI
0075FC84  5B                        POP EBX
0075FC85  5D                        POP EBP
0075FC86  C2 08 00                  RET 0x8
LAB_0075fc89:
0075FC89  C7 47 04 80 FD 75 00      MOV dword ptr [EDI + 0x4],0x75fd80
LAB_0075fc90:
0075FC90  5F                        POP EDI
0075FC91  5E                        POP ESI
0075FC92  5B                        POP EBX
0075FC93  5D                        POP EBP
0075FC94  C2 08 00                  RET 0x8
