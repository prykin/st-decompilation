FUN_0062a8b0:
0062A8B0  55                        PUSH EBP
0062A8B1  8B EC                     MOV EBP,ESP
0062A8B3  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0062A8B6  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0062A8B9  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0062A8BC  50                        PUSH EAX
0062A8BD  51                        PUSH ECX
0062A8BE  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0062A8C4  52                        PUSH EDX
0062A8C5  E8 74 A1 DD FF            CALL 0x00404a3e
0062A8CA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0062A8CD  40                        INC EAX
0062A8CE  3D 80 00 00 00            CMP EAX,0x80
0062A8D3  C7 01 5C 0D 00 00         MOV dword ptr [ECX],0xd5c
0062A8D9  0F 87 EE 00 00 00         JA 0x0062a9cd
0062A8DF  33 D2                     XOR EDX,EDX
0062A8E1  8A 90 00 AA 62 00         MOV DL,byte ptr [EAX + 0x62aa00]
switchD_0062a8e7::switchD:
0062A8E7  FF 24 95 D4 A9 62 00      JMP dword ptr [EDX*0x4 + 0x62a9d4]
switchD_0062a8e7::caseD_0:
0062A8EE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062A8F1  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0062A8F4  C7 00 B5 24 00 00         MOV dword ptr [EAX],0x24b5
0062A8FA  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
0062A900  B8 01 00 00 00            MOV EAX,0x1
0062A905  5D                        POP EBP
0062A906  C2 18 00                  RET 0x18
switchD_0062a8e7::caseD_1:
0062A909  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0062A90C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0062A90F  C7 02 F5 19 00 00         MOV dword ptr [EDX],0x19f5
0062A915  C7 00 0B E6 FF FF         MOV dword ptr [EAX],0xffffe60b
0062A91B  B8 01 00 00 00            MOV EAX,0x1
0062A920  5D                        POP EBP
0062A921  C2 18 00                  RET 0x18
switchD_0062a8e7::caseD_2:
0062A924  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062A927  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0062A92A  B8 01 00 00 00            MOV EAX,0x1
0062A92F  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
0062A935  C7 02 4B DB FF FF         MOV dword ptr [EDX],0xffffdb4b
0062A93B  5D                        POP EBP
0062A93C  C2 18 00                  RET 0x18
switchD_0062a8e7::caseD_3:
0062A93F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062A942  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0062A945  C7 00 0B E6 FF FF         MOV dword ptr [EAX],0xffffe60b
0062A94B  C7 01 0B E6 FF FF         MOV dword ptr [ECX],0xffffe60b
0062A951  B8 01 00 00 00            MOV EAX,0x1
0062A956  5D                        POP EBP
0062A957  C2 18 00                  RET 0x18
switchD_0062a8e7::caseD_4:
0062A95A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0062A95D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0062A960  C7 02 4B DB FF FF         MOV dword ptr [EDX],0xffffdb4b
0062A966  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0062A96C  B8 01 00 00 00            MOV EAX,0x1
0062A971  5D                        POP EBP
0062A972  C2 18 00                  RET 0x18
switchD_0062a8e7::caseD_5:
0062A975  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062A978  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0062A97B  B8 01 00 00 00            MOV EAX,0x1
0062A980  C7 01 0B E6 FF FF         MOV dword ptr [ECX],0xffffe60b
0062A986  C7 02 F5 19 00 00         MOV dword ptr [EDX],0x19f5
0062A98C  5D                        POP EBP
0062A98D  C2 18 00                  RET 0x18
switchD_0062a8e7::caseD_6:
0062A990  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062A993  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0062A996  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0062A99C  C7 01 B5 24 00 00         MOV dword ptr [ECX],0x24b5
0062A9A2  B8 01 00 00 00            MOV EAX,0x1
0062A9A7  5D                        POP EBP
0062A9A8  C2 18 00                  RET 0x18
switchD_0062a8e7::caseD_7:
0062A9AB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0062A9AE  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0062A9B1  C7 02 F5 19 00 00         MOV dword ptr [EDX],0x19f5
0062A9B7  C7 00 F5 19 00 00         MOV dword ptr [EAX],0x19f5
0062A9BD  B8 01 00 00 00            MOV EAX,0x1
0062A9C2  5D                        POP EBP
0062A9C3  C2 18 00                  RET 0x18
switchD_0062a8e7::caseD_ffffffff:
0062A9C6  83 C8 FF                  OR EAX,0xffffffff
0062A9C9  5D                        POP EBP
0062A9CA  C2 18 00                  RET 0x18
switchD_0062a8e7::caseD_8:
0062A9CD  33 C0                     XOR EAX,EAX
0062A9CF  5D                        POP EBP
0062A9D0  C2 18 00                  RET 0x18
