FUN_0061fdb0:
0061FDB0  8D 91 B1 00 00 00         LEA EDX,[ECX + 0xb1]
0061FDB6  33 C0                     XOR EAX,EAX
0061FDB8  89 02                     MOV dword ptr [EDX],EAX
0061FDBA  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
0061FDBD  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
0061FDC0  8D 91 BD 00 00 00         LEA EDX,[ECX + 0xbd]
0061FDC6  89 81 BD 00 00 00         MOV dword ptr [ECX + 0xbd],EAX
0061FDCC  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
0061FDCF  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
0061FDD2  8D 91 C9 00 00 00         LEA EDX,[ECX + 0xc9]
0061FDD8  89 81 C9 00 00 00         MOV dword ptr [ECX + 0xc9],EAX
0061FDDE  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
0061FDE1  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
0061FDE4  8D 91 D5 00 00 00         LEA EDX,[ECX + 0xd5]
0061FDEA  81 C1 E1 00 00 00         ADD ECX,0xe1
0061FDF0  89 02                     MOV dword ptr [EDX],EAX
0061FDF2  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
0061FDF5  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
0061FDF8  89 01                     MOV dword ptr [ECX],EAX
0061FDFA  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0061FDFD  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
0061FE00  C3                        RET
