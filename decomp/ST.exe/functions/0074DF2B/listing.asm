FUN_0074df2b:
0074DF2B  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074DF2F  56                        PUSH ESI
0074DF30  85 C0                     TEST EAX,EAX
0074DF32  8B F1                     MOV ESI,ECX
0074DF34  74 38                     JZ 0x0074df6e
0074DF36  8B 08                     MOV ECX,dword ptr [EAX]
0074DF38  57                        PUSH EDI
0074DF39  85 C9                     TEST ECX,ECX
0074DF3B  75 07                     JNZ 0x0074df44
0074DF3D  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0074DF40  89 0E                     MOV dword ptr [ESI],ECX
0074DF42  EB 06                     JMP 0x0074df4a
LAB_0074df44:
0074DF44  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0074DF47  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
LAB_0074df4a:
0074DF4A  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0074DF4D  85 C9                     TEST ECX,ECX
0074DF4F  75 07                     JNZ 0x0074df58
0074DF51  8B 08                     MOV ECX,dword ptr [EAX]
0074DF53  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
0074DF56  EB 04                     JMP 0x0074df5c
LAB_0074df58:
0074DF58  8B 10                     MOV EDX,dword ptr [EAX]
0074DF5A  89 11                     MOV dword ptr [ECX],EDX
LAB_0074df5c:
0074DF5C  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
0074DF5F  50                        PUSH EAX
0074DF60  8D 4E 0C                  LEA ECX,[ESI + 0xc]
0074DF63  E8 71 03 00 00            CALL 0x0074e2d9
0074DF68  FF 4E 08                  DEC dword ptr [ESI + 0x8]
0074DF6B  8B C7                     MOV EAX,EDI
0074DF6D  5F                        POP EDI
LAB_0074df6e:
0074DF6E  5E                        POP ESI
0074DF6F  C2 04 00                  RET 0x4
