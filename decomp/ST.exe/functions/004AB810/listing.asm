FUN_004ab810:
004AB810  8B C1                     MOV EAX,ECX
004AB812  33 C9                     XOR ECX,ECX
004AB814  C7 00 90 07 79 00         MOV dword ptr [EAX],0x790790
004AB81A  89 48 14                  MOV dword ptr [EAX + 0x14],ECX
004AB81D  C7 40 18 FF FF FF FF      MOV dword ptr [EAX + 0x18],0xffffffff
004AB824  89 48 20                  MOV dword ptr [EAX + 0x20],ECX
004AB827  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
004AB82A  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
004AB82D  89 48 34                  MOV dword ptr [EAX + 0x34],ECX
004AB830  88 48 11                  MOV byte ptr [EAX + 0x11],CL
004AB833  88 48 10                  MOV byte ptr [EAX + 0x10],CL
004AB836  88 48 12                  MOV byte ptr [EAX + 0x12],CL
004AB839  89 48 2C                  MOV dword ptr [EAX + 0x2c],ECX
004AB83C  89 48 28                  MOV dword ptr [EAX + 0x28],ECX
004AB83F  89 48 24                  MOV dword ptr [EAX + 0x24],ECX
004AB842  8B 15 98 75 80 00         MOV EDX,dword ptr [0x00807598]
004AB848  89 50 3C                  MOV dword ptr [EAX + 0x3c],EDX
004AB84B  88 48 13                  MOV byte ptr [EAX + 0x13],CL
004AB84E  89 48 30                  MOV dword ptr [EAX + 0x30],ECX
004AB851  89 48 38                  MOV dword ptr [EAX + 0x38],ECX
004AB854  89 48 1C                  MOV dword ptr [EAX + 0x1c],ECX
004AB857  C3                        RET
