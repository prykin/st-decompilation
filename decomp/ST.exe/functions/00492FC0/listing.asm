FUN_00492fc0:
00492FC0  56                        PUSH ESI
00492FC1  57                        PUSH EDI
00492FC2  8B F9                     MOV EDI,ECX
00492FC4  83 BF 5D 04 00 00 09      CMP dword ptr [EDI + 0x45d],0x9
00492FCB  75 51                     JNZ 0x0049301e
00492FCD  83 BF 11 06 00 00 03      CMP dword ptr [EDI + 0x611],0x3
00492FD4  75 48                     JNZ 0x0049301e
00492FD6  66 8B 87 FD 05 00 00      MOV AX,word ptr [EDI + 0x5fd]
00492FDD  8A 8F FC 05 00 00         MOV CL,byte ptr [EDI + 0x5fc]
00492FE3  6A 01                     PUSH 0x1
00492FE5  50                        PUSH EAX
00492FE6  51                        PUSH ECX
00492FE7  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00492FED  E8 C8 F8 F6 FF            CALL 0x004028ba
00492FF2  8B F0                     MOV ESI,EAX
00492FF4  85 F6                     TEST ESI,ESI
00492FF6  74 26                     JZ 0x0049301e
00492FF8  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00492FFB  8B 87 FF 05 00 00         MOV EAX,dword ptr [EDI + 0x5ff]
00493001  3B D0                     CMP EDX,EAX
00493003  75 19                     JNZ 0x0049301e
00493005  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
00493008  8B 06                     MOV EAX,dword ptr [ESI]
0049300A  51                        PUSH ECX
0049300B  8B CE                     MOV ECX,ESI
0049300D  FF 90 08 01 00 00         CALL dword ptr [EAX + 0x108]
00493013  85 C0                     TEST EAX,EAX
00493015  74 07                     JZ 0x0049301e
00493017  8B CE                     MOV ECX,ESI
00493019  E8 00 2B F7 FF            CALL 0x00405b1e
LAB_0049301e:
0049301E  5F                        POP EDI
0049301F  5E                        POP ESI
00493020  C3                        RET
