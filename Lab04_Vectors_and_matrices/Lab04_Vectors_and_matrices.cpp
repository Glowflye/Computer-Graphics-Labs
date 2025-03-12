#include <iostream>

// Include the glm library
#include <glm/glm.hpp>
#include <glm/gtx/io.hpp>

int main() {
    
    //To understand this maths, look at week 4 on moodle
    // Vectors
    printf("Vectors and Matrices\n");
    printf("--------------------------------------------------\n");

    // Defining vectors
    glm::vec3 a, b;
    a = glm::vec3(3.0f, 0.0f, 4.0f);
    b[0] = 1.0f, b[1] = 2.0f, b[2] = 3.0f;

    printf("Defining vectors:\n");
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    // Vector length
    printf("\nVector length:\n");
    printf("length(a) = %0.3f\n", glm::length(a));
    printf("length(b) = %0.3f\n", glm::length(b));

    // Arithmetic operations on vectors
    printf("\nArithmetic operations on vectors:\n");
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;

    //Multiplication/division on a vector
    std::cout << "2a    = " << 2.0f * a << std::endl;
    std::cout << "b / 3 = " << b / 3.0f << std::endl;

    //Element-wise mutiplication
    std::cout << "a * b = " << a * b << std::endl;

    //Dot product (if the dot product is 0, both elements are perpendicular to each other)
    printf("\nDot and cross products:\n");
    printf("a . b = %0.3f\n", glm::dot(a, b));

    //Cross product (used for calculating how light should bounce off of an object (will be used in Lab 8 for lighting, come back later))
    std::cout << "a x b = " << glm::cross(a, b) << std::endl;
    printf("a . (a x b) = %0.3f\n", glm::dot(a, glm::cross(a, b)));
    printf("b . (a x b) = %0.3f\n", glm::dot(b, glm::cross(a, b)));

    // Defining matrices
    glm::mat2 A, B;

    A[0][0] = 1.0f, A[0][1] = 2.0f;
    A[1][0] = 3.0f, A[1][1] = 4.0f;

    B = glm::mat2(5.0f, 6.0f, 7.0f, 8.0f);

    printf("\nDefining matrices:\n");
    std::cout << "A = " << A << "\n" << std::endl;
    std::cout << "B = " << B << std::endl;
    //Output above isn't "correct", this will be fixed in the section below
    //OpenGL uses column-major order when storing things in memory 

    //Transpose matrix
    printf("\nTransposing matrices:\n");
    std::cout << "A = " << glm::transpose(A) << "\n" << std::endl;
    std::cout << "B = " << glm::transpose(B) << std::endl;

    //Arthimetic on matrices
    printf("\nArithmetic operations on matrices:\n");
    std::cout << "A + B = " << glm::transpose(A + B) << "\n" << std::endl;
    std::cout << "A - B = " << glm::transpose(A - B) << "\n" << std::endl;
    std::cout << "2A    = " << glm::transpose(2.0f * A) << "\n" << std::endl;
    std::cout << "A / 3 = " << glm::transpose(A / 3.0f) << "\n" << std::endl;

    //Multiplying two matrices
    std::cout << "A * B = " << glm::transpose(B * A) << "\n" << std::endl;
    std::cout << "B * A = " << glm::transpose(A * B) << "\n" << std::endl;
    //Note that the order in which the matrices are multiplied matters as it will change the outcome
    //Read Lab 4 again for help understanding HOW to multiply this way

    // The identity matrix
    printf("\nThe identity matrix:\n");
    glm::mat4 I;
    std::cout << "I = " << glm::transpose(I) << "\n" << std::endl;
    //By default, OenGL defines matrices as identity matrices like the one above
    
    // Inverse matrices
    printf("\nInverse matrices:\n");
    glm::mat2 invA = glm::inverse(A);
    glm::mat2 invB = glm::inverse(B);
    std::cout << "invA = " << glm::transpose(invA) << "\n" << std::endl;
    std::cout << "invB = " << glm::transpose(invB) << "\n" << std::endl;
    std::cout << "invA * A = " << glm::transpose(A * invA) << "\n" << std::endl;
    std::cout << "invB * B = " << glm::transpose(B * invB) << "\n" << std::endl;
    //Matrices can't be divided in a conventional way, however an inverse operation can be carried out on a matrice to to perform a kind-of psuedo-division of the matrices
    
    // Normalising vectors
    glm::vec3 aHat, bHat;
    aHat = glm::normalize(a);
    bHat = b / glm::length(b);

    printf("\nNormalising vectors:\n");
    std::cout << "aHat = " << aHat << std::endl;
    std::cout << "bHat = " << bHat << std::endl;
    printf("length(aHat) = %0.3f\n", glm::length(aHat));
    printf("length(bHat) = %0.3f\n", glm::length(bHat));

    //Exercises
    printf("\nExercises:\n");
    //Can wait for the future, I'm hungry
}
