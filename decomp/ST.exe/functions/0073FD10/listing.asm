FUN_0073fd10:
0073FD10  55                        PUSH EBP
0073FD11  8B EC                     MOV EBP,ESP
0073FD13  51                        PUSH ECX
0073FD14  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0073FD1B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073FD1E  25 FF FF 00 00            AND EAX,0xffff
0073FD23  83 E0 01                  AND EAX,0x1
0073FD26  85 C0                     TEST EAX,EAX
0073FD28  74 09                     JZ 0x0073fd33
0073FD2A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073FD2D  83 C9 10                  OR ECX,0x10
0073FD30  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0073fd33:
0073FD33  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073FD36  81 E2 FF FF 00 00         AND EDX,0xffff
0073FD3C  83 E2 04                  AND EDX,0x4
0073FD3F  85 D2                     TEST EDX,EDX
0073FD41  74 08                     JZ 0x0073fd4b
0073FD43  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073FD46  0C 08                     OR AL,0x8
0073FD48  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0073fd4b:
0073FD4B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073FD4E  81 E1 FF FF 00 00         AND ECX,0xffff
0073FD54  83 E1 08                  AND ECX,0x8
0073FD57  85 C9                     TEST ECX,ECX
0073FD59  74 09                     JZ 0x0073fd64
0073FD5B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073FD5E  83 CA 04                  OR EDX,0x4
0073FD61  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0073fd64:
0073FD64  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073FD67  25 FF FF 00 00            AND EAX,0xffff
0073FD6C  83 E0 10                  AND EAX,0x10
0073FD6F  85 C0                     TEST EAX,EAX
0073FD71  74 09                     JZ 0x0073fd7c
0073FD73  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073FD76  83 C9 02                  OR ECX,0x2
0073FD79  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0073fd7c:
0073FD7C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073FD7F  81 E2 FF FF 00 00         AND EDX,0xffff
0073FD85  83 E2 20                  AND EDX,0x20
0073FD88  85 D2                     TEST EDX,EDX
0073FD8A  74 08                     JZ 0x0073fd94
0073FD8C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073FD8F  0C 01                     OR AL,0x1
0073FD91  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0073fd94:
0073FD94  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073FD97  81 E1 FF FF 00 00         AND ECX,0xffff
0073FD9D  83 E1 02                  AND ECX,0x2
0073FDA0  85 C9                     TEST ECX,ECX
0073FDA2  74 0C                     JZ 0x0073fdb0
0073FDA4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073FDA7  81 CA 00 00 08 00         OR EDX,0x80000
0073FDAD  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0073fdb0:
0073FDB0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073FDB3  8B E5                     MOV ESP,EBP
0073FDB5  5D                        POP EBP
0073FDB6  C3                        RET
